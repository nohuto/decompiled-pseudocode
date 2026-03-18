/*
 * XREFs of NtUserGetMenuIndex @ 0x140296950
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetMenuIndex(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v4 = ValidateHmenu(a1, 1LL);
  v6 = 0;
  v7 = v4;
  if ( v4 && (v8 = ValidateHmenu(a2, 1LL)) != 0 )
  {
    v9 = -1;
    while ( v6 < *(_DWORD *)(*(_QWORD *)(v7 + 40) + 44LL) )
    {
      v5 = 96LL * (int)v6;
      if ( *(_QWORD *)(v5 + *(_QWORD *)(v7 + 88) + 16) == v8 )
        goto LABEL_7;
      ++v6;
    }
  }
  else
  {
LABEL_7:
    v9 = v6;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v9;
}
