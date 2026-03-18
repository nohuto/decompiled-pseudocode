/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x140148D10
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x140073A80 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, void *a2, void *a3)
{
  PVOID v5; // rbx
  __int64 v6; // rcx
  int v7; // edi
  PVOID v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rcx
  PVOID v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64, PVOID, PVOID); // rax
  int v17; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  RtlCopyFromUser(&Object, a2, 8uLL);
  v5 = Object;
  Object = 0LL;
  v7 = DirectComposition::ResourceObject::ResolveHandle(a3, 1u, 1, (struct DirectComposition::ResourceObject **)&Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( *((_DWORD *)Object + 9) == 184 )
    {
      GreLockDwmState(v6);
      Object = 0LL;
      v7 = OpenDwmHandle(v8, ExCompositionObjectType, 3u, v9, v17, &Object);
      if ( v7 >= 0 )
      {
        v11 = Object;
        v12 = UserReferenceDwmApiPort();
        v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 24);
        v15 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, PVOID))(v10 + 2688);
        if ( v15 )
          v7 = v15(v12, a1, v5, v11);
        else
          v7 = -1073741637;
      }
      GreUnlockDwmState(v10);
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
