/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C0209BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0086BD0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C0086FA0 (UserReferenceDwmApiPort.c)
 *     GreLockDwmState @ 0x1C0087030 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00870B0 (GreUnlockDwmState.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0099744 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2, __int64 a3)
{
  CompositionObject *v3; // rbx
  int v4; // edi
  PVOID v6; // rcx
  PVOID v7; // rsi
  int v8; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2 )
    goto LABEL_6;
  LOBYTE(a3) = 1;
  v4 = DirectComposition::ResourceObject::ResolveHandle(
         a2,
         1LL,
         a3,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v3 = (CompositionObject *)Object;
  if ( Object && *((_DWORD *)Object + 9) != 196 )
  {
    v4 = -1073741811;
  }
  else
  {
LABEL_6:
    GreLockDwmState(a1);
    v7 = 0LL;
    Object = 0LL;
    if ( v3 )
    {
      v8 = CompositionObject::OpenDwmHandle(v3, &Object);
      v7 = Object;
      v4 = v8;
    }
    if ( v4 >= 0 )
    {
      v6 = UserReferenceDwmApiPort((__int64)v6);
      if ( qword_1C0294ED8 )
        v4 = qword_1C0294ED8(v6, a1, v7);
      else
        v4 = -1073741637;
    }
    GreUnlockDwmState((__int64)v6);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
