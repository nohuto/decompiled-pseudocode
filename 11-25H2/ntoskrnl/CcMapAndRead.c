/*
 * XREFs of CcMapAndRead @ 0x14025AE80
 * Callers:
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x14097E650 (CcMapData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v5; // bp
  int v7; // edx
  int v8; // r11d
  NTSTATUS v9; // r10d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // r14d
  char v17; // [rsp+70h] [rbp+18h]
  int v18; // [rsp+78h] [rbp+20h]

  v17 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v7 = 2;
  v8 = 1;
  if ( a3 )
    v7 = 0;
  v18 = v7;
  v9 = 0;
  v10 = ((a4 & 0xFFF) + (unsigned __int64)a1 + 4095) >> 12;
  v11 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v12 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  while ( (_DWORD)v10 )
  {
    v13 = v10 - 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( (unsigned int)(v10 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      if ( v13 <= 0xF )
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13;
      else
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
    }
    v14 = 0;
    if ( a2 )
    {
      v15 = 1;
      if ( v8 == 2 )
        v15 = v10 - 1;
    }
    else
    {
      v15 = v10;
    }
    LOBYTE(v14) = (v8 & a2) != 0;
    v9 = MmCheckCachedPageStates(v11, (unsigned int)(v15 << 12), v7 | v14);
    a3 = v17;
    if ( v9 < 0 )
      goto LABEL_13;
    v7 = v18;
    v11 += (unsigned int)(v15 << 12);
    LODWORD(v10) = v10 - v15;
    v8 = 4;
    if ( (_DWORD)v10 != 1 )
      v8 = 2;
  }
  v5 = 1;
LABEL_13:
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v12 >> 1;
  BYTE4(CurrentThread[1].Queue) = v12 & 1;
  if ( a3 && v9 < 0 )
    RtlRaiseStatus(v9);
  return v5;
}
