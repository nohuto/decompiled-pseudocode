/*
 * XREFs of CcMapAndRead @ 0x140236280
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x140960C20 (CcMapData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v5; // r12
  int v7; // edx
  int v8; // r11d
  int v9; // eax
  NTSTATUS v10; // r10d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // ebp
  int v17; // eax
  char v19; // [rsp+60h] [rbp+8h] BYREF
  char v20; // [rsp+70h] [rbp+18h]
  int v21; // [rsp+78h] [rbp+20h]

  v20 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v7 = 2;
  v8 = 1;
  if ( a3 )
    v7 = 0;
  v19 = 1;
  v9 = BYTE4(CurrentThread[1].Queue);
  v21 = v7;
  v10 = 0;
  v11 = ((a4 & 0xFFF) + (unsigned __int64)a1 + 4095) >> 12;
  v12 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v13 = v9 + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  while ( (_DWORD)v11 )
  {
    v14 = v11 - 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( (unsigned int)(v11 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      if ( v14 <= 0xF )
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v14;
      else
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
    }
    v15 = 0;
    if ( a2 )
    {
      v16 = 1;
      if ( v8 == 2 )
        v16 = v11 - 1;
    }
    else
    {
      v16 = v11;
    }
    LOBYTE(v15) = (v8 & a2) != 0;
    v17 = MmCheckCachedPageStates(v12, (unsigned int)(v16 << 12), v7 | v15, &v19);
    v10 = v17;
    a3 = v20;
    if ( !v19 && !v20 )
    {
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13 >> 1;
      BYTE4(CurrentThread[1].Queue) = v13 & 1;
      return v5;
    }
    if ( v17 < 0 )
      goto LABEL_14;
    v7 = v21;
    v12 += (unsigned int)(v16 << 12);
    LODWORD(v11) = v11 - v16;
    v8 = 4;
    if ( (_DWORD)v11 != 1 )
      v8 = 2;
  }
  v5 = 1;
LABEL_14:
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13 >> 1;
  BYTE4(CurrentThread[1].Queue) = v13 & 1;
  if ( a3 && v10 < 0 )
    RtlRaiseStatus(v10);
  return v5;
}
