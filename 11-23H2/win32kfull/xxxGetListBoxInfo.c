/*
 * XREFs of xxxGetListBoxInfo @ 0x1C0230340
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C01D1A50 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX @ 0x1C01BAB70 (unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX.c)
 */

__int64 __fastcall xxxGetListBoxInfo(unsigned __int64 *BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 *v4; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  PRKPROCESS *v10; // rdi
  PRKPROCESS *v11; // r14
  unsigned __int64 v12; // rsi

  v2 = 0LL;
  v4 = (unsigned __int64 *)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(BugCheckParameter2);
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v10 = (PRKPROCESS *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v8 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = (PRKPROCESS *)(v7 & CurrentProcessWin32Process);
    }
    v11 = *(PRKPROCESS **)(BugCheckParameter2[2] + 424);
    if ( v11 != v10 )
      KeAttachProcess(*v11);
    v12 = *v4;
    if ( *v4 )
    {
      if ( !PsGetCurrentProcessWow64Process(v8, v7, v9) )
        v2 = 3LL;
      if ( (v2 & v12) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (*(_DWORD *)(v12 + 92) & 0x40000) != 0 )
        LODWORD(v2) = *(_DWORD *)(v12 + 76);
      else
        LODWORD(v2) = *(_DWORD *)(v12 + 32);
    }
    if ( v11 != v10 )
      KeDetachProcess();
    return (unsigned int)v2;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
