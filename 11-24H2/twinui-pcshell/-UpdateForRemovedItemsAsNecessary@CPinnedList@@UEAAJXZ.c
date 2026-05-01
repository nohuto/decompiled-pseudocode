/*
 * XREFs of ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x180696AB0
 * Callers:
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ @ 0x1806889D0 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x1806975D4 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x180697E9C (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z @ 0x18069831C (-_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::UpdateForRemovedItemsAsNecessary(CPinnedList *this)
{
  int v2; // esi
  unsigned int v3; // r15d
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  int v7; // eax
  const struct _ITEMIDLIST *v8; // rdx
  int v9; // esi
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-39h] BYREF
  LPITEMIDLIST i; // [rsp+38h] [rbp-31h] BYREF
  LPITEMIDLIST pidl; // [rsp+40h] [rbp-29h] BYREF
  __int64 v15; // [rsp+48h] [rbp-21h] BYREF
  int v16; // [rsp+50h] [rbp-19h] BYREF
  int v17; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-9h] BYREF
  int *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  int *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]

  v2 = 0;
  v3 = CPinnedList::_GetRemovedGlobalChangeCount(this);
  if ( (unsigned int)IsProcessAnExplorer()
    && v3 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 2) + 184LL))((char *)this - 16) )
  {
    v4 = *(_QWORD *)this;
    v15 = 0LL;
    v5 = 0;
    *((_DWORD *)this + 16) = 1;
    v12 = 0;
    v2 = (*(__int64 (__fastcall **)(CPinnedList *, __int64 *))(v4 + 24))(this, &v15);
    if ( v2 >= 0 )
    {
      for ( i = 0LL;
            !(*(unsigned int (__fastcall **)(__int64, __int64, LPITEMIDLIST *, _QWORD))(*(_QWORD *)v15 + 24LL))(
               v15,
               1LL,
               &i,
               0LL);
            ILFree(i) )
      {
        v6 = *(_QWORD *)this;
        pidl = 0LL;
        v7 = (*(__int64 (__fastcall **)(CPinnedList *, _QWORD, __int64, LPITEMIDLIST, LPITEMIDLIST *))(v6 + 48))(
               this,
               0LL,
               17LL,
               i,
               &pidl);
        v8 = i;
        v9 = v7;
        if ( v7 < 0 )
        {
          if ( (*(int (__fastcall **)(char *, LPITEMIDLIST, __int64))(*((_QWORD *)this + 2) + 24LL))(
                 (char *)this + 16,
                 i,
                 15LL) >= 0 )
            v5 = 1;
          v12 = v5;
          if ( (byte_1808C9F82 & 4) != 0 )
          {
            v21 = 0;
            v24 = 0;
            v19 = &v16;
            v20 = 4;
            v22 = &v17;
            v23 = 4;
            v17 = 2;
            v16 = v9;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Shell_Core_Provider_Context,
              (const EVENT_DESCRIPTOR *)"T&",
              v10,
              3u,
              &v18);
          }
        }
        else
        {
          if ( pidl )
            v8 = pidl;
          CPinnedList::_ResolveTargetLink((CPinnedList *)((char *)this - 16), v8, &v12);
          ILFree(pidl);
          v5 = v12;
        }
      }
      v2 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    *((_DWORD *)this + 16) = 0;
    if ( v5 )
      CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)this - 16), 0LL, 1);
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 176LL))((char *)this - 16, v3);
  }
  return (unsigned int)v2;
}
