/*
 * XREFs of xxxGetListBoxInfo @ 0x1402E0424
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1402968C0 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX @ 0x140283160 (unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX.c)
 */

__int64 __fastcall xxxGetListBoxInfo(struct tagWND *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  PRKPROCESS *v9; // rdi
  PRKPROCESS *v10; // rsi
  unsigned int v11; // ebx
  _DWORD *v12; // [rsp+68h] [rbp+10h]

  v3 = (_QWORD *)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(a1);
  if ( !v3 )
    return xxxSendMessage(a1, 0x1B2u);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  v9 = (PRKPROCESS *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v9 = (PRKPROCESS *)(v6 & CurrentProcessWin32Process);
  }
  v10 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v10 != v9 )
    KeAttachProcess(*v10);
  v12 = (_DWORD *)*v3;
  if ( *v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v7, v6, v8) != 0 ? 0 : 3) & (unsigned int)v12) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (v12[23] & 0x40000) != 0 )
      v11 = v12[19];
    else
      v11 = v12[8];
  }
  else
  {
    v11 = 0;
  }
  if ( v10 != v9 )
    KeDetachProcess();
  return v11;
}
