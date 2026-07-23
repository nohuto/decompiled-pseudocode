/*
 * XREFs of PspVsmLogBugCheckCallback @ 0x1405E3E00
 * Callers:
 *     <none>
 * Callees:
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PspVsmLogBugCheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r8d
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  int *v14; // rcx
  char *v15; // rdx
  char v16; // al

  v4 = PspIumLogBuffer;
  v5 = 0;
  if ( PspIumLogBuffer )
  {
    ReasonSpecificData[4] = PspIumLogBuffer;
    *((_DWORD *)ReasonSpecificData + 10) = 0x2000;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_14002B6A0;
    memset_0(&unk_140F052E0, 0, 0x100uLL);
    v6 = 0;
    SkStackDumpEventLog[0] = 1733060695;
    dword_140F052C4 = 1;
    qword_140F052C8 = 288LL;
    dword_140F052D4 = -2147483541;
    dword_140F052D0 = -2147483541;
    dword_140F052D8 = 24;
    dword_140F052DC = 256;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v4 + 12);
      v8 = v7;
      if ( v7 >= 0x26 )
        v8 = 38LL;
      v9 = v6;
      if ( v6 >= v8 )
        break;
      v10 = *(_DWORD *)(v4 + 8LL * v6++ + 1172);
      SkStackDumpEventLog[v9 + 24] = v10;
      *((_BYTE *)&SkStackDumpEventLog[62] + v9) = *(_BYTE *)(v4 + 8 * v9 + 1168);
    }
    while ( 1 )
    {
      v11 = *(_DWORD *)(v4 + 8);
      v12 = v11;
      if ( v11 >= 8 )
        v12 = 8LL;
      if ( v5 >= v12 )
        break;
      v13 = 8LL;
      v14 = &SkStackDumpEventLog[2 * v5 + 8];
      v15 = (char *)(v4 + 8 * (v5 + 8LL * v5 + 2));
      do
      {
        v16 = *v15;
        v15 += 2;
        *(_BYTE *)v14 = v16;
        v14 = (int *)((char *)v14 + 1);
        --v13;
      }
      while ( v13 );
      ++v5;
    }
    WheaLogInternalEvent(SkStackDumpEventLog);
  }
}
