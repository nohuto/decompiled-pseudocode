/*
 * XREFs of KiSendFreeze @ 0x1405BF500
 * Callers:
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C32B0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     HalSendNMI @ 0x140541B10 (HalSendNMI.c)
 */

__int64 __fastcall KiSendFreeze(struct _KAFFINITY_EX *a1, char a2)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rax
  int v6; // edi
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned __int16 *v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v10; // [rsp+30h] [rbp-10h]
  int v11; // [rsp+32h] [rbp-Eh]
  __int16 v12; // [rsp+36h] [rbp-Ah]
  unsigned int v13; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  result = (unsigned int)_InterlockedIncrement(&KiFreezeNestingLevel);
  if ( (int)result <= 1 )
  {
    v5 = (unsigned __int16 *)a1->Bitmap[0];
    v9[0] = &a1->Count;
    v6 = 0;
    v10 = 0;
    v9[1] = v5;
    result = KeEnumerateNextProcessor(&v13, v9);
    if ( !(_DWORD)result )
    {
      while ( 1 )
      {
        v7 = KiProcessorBlock[v13];
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11656), 5, 0);
        if ( a2 )
        {
          if ( v8 )
          {
            do
            {
              do
                _mm_pause();
              while ( *(_DWORD *)(v7 + 11656) );
            }
            while ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11656), 5, 0) );
          }
        }
        else if ( v8 )
        {
          KeRemoveProcessorAffinityEx(&a1->Count, v13);
          goto LABEL_8;
        }
        ++v6;
LABEL_8:
        result = KeEnumerateNextProcessor(&v13, v9);
        if ( (_DWORD)result )
        {
          if ( v6 )
            return HalSendNMI(a1);
          return result;
        }
      }
    }
  }
  return result;
}
