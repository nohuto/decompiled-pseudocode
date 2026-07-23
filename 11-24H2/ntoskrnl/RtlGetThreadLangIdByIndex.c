/*
 * XREFs of RtlGetThreadLangIdByIndex @ 0x1404964A0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlGetThreadLangIdByIndex(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *Teb; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned __int16 v13; // [rsp+20h] [rbp-28h]
  unsigned int v14; // [rsp+24h] [rbp-24h]
  unsigned int v15; // [rsp+28h] [rbp-20h]

  v14 = 0;
  v13 = 0;
  v15 = 0;
  if ( a1 || !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v8 = Teb[762];
  if ( v8 )
  {
    if ( (v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = *(_QWORD *)(v8 + 24);
    if ( v9 )
    {
      v15 = *(unsigned __int16 *)(v8 + 4);
      if ( a2 < v15 )
      {
        if ( (v9 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = v9 + 6LL * a2;
        if ( (unsigned __int16)*(_DWORD *)v10 == 1 )
          v13 = *(_WORD *)(v10 + 4);
        else
          v14 = -1073741595;
      }
    }
  }
  *a3 = v13;
  if ( a4 )
    *a4 = v15;
  v11 = v14;
  if ( !v14 )
  {
    if ( !v13 )
      return (unsigned int)-1073741275;
    return v11;
  }
  return v14;
}
