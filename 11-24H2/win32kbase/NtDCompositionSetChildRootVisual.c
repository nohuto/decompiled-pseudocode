/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1402239E0
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x140073A80 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2)
{
  PVOID v2; // rbx
  int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // r9
  PVOID v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64, PVOID); // rax
  int v14; // [rsp+20h] [rbp-18h]
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  Object = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v3 = DirectComposition::ResourceObject::ResolveHandle(a2, 1u, 1, (struct DirectComposition::ResourceObject **)&Object);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v2 = Object;
  if ( Object && *((_DWORD *)Object + 9) != 184 )
  {
    v3 = -1073741811;
  }
  else
  {
LABEL_6:
    GreLockDwmState(a1);
    v7 = 0LL;
    Object = 0LL;
    if ( v2 )
    {
      v8 = OpenDwmHandle(v2, ExCompositionObjectType, 3u, v6, v14, &Object);
      v7 = Object;
      v3 = v8;
    }
    if ( v3 >= 0 )
    {
      v9 = UserReferenceDwmApiPort();
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 24);
      v12 = *(__int64 (__fastcall **)(__int64, __int64, PVOID))(v5 + 2712);
      if ( v12 )
        v3 = v12(v9, a1, v7);
      else
        v3 = -1073741637;
    }
    GreUnlockDwmState(v5);
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v3;
}
