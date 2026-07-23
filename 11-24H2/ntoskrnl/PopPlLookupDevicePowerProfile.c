/*
 * XREFs of PopPlLookupDevicePowerProfile @ 0x1405D9900
 * Callers:
 *     PopPlRegisterDevice @ 0x1404A880C (PopPlRegisterDevice.c)
 *     PopPlActivateDeviceIterator @ 0x1405D9720 (PopPlActivateDeviceIterator.c)
 *     PopPlIdleDeviceIterator @ 0x1405D9870 (PopPlIdleDeviceIterator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPlLookupDevicePowerProfile(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r11
  unsigned __int64 i; // r10
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int16 *v9; // r8
  unsigned __int16 *v10; // rdi
  unsigned __int16 *v11; // rsi
  signed __int64 v12; // rdi
  int v13; // ecx
  int v14; // r14d
  unsigned __int16 v15; // dx
  __int16 v16; // cx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  for ( i = 0LL; i < v2; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i);
    if ( a2 == (unsigned __int16 *)v7 )
      return *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i);
    v8 = *a2;
    if ( (_WORD)v8 == *(_WORD *)v7 )
    {
      v9 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
      v10 = *(unsigned __int16 **)(v7 + 8);
      if ( v9 != v10 )
      {
        v11 = (unsigned __int16 *)((char *)v9 + v8);
        v12 = (char *)v10 - (char *)v9;
        while ( v9 < v11 )
        {
          v13 = *v9;
          v14 = *(unsigned __int16 *)((char *)v9 + v12);
          if ( (_WORD)v13 != (_WORD)v14 )
          {
            v15 = v13 - 32;
            if ( (unsigned int)(v13 - 97) > 0x19 )
              v15 = *v9;
            v16 = v14 - 32;
            if ( (unsigned int)(v14 - 97) > 0x19 )
              v16 = *(unsigned __int16 *)((char *)v9 + v12);
            if ( v15 != v16 )
              goto LABEL_15;
          }
          ++v9;
        }
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i);
    }
LABEL_15:
    ;
  }
  return v3;
}
