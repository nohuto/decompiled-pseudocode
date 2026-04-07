/*
 * XREFs of ?OnAnimationComplete@CDisplayAnimatedVisual@@UEAAJI@Z @ 0x1800BD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnAnimationComplete(CDisplayAnimatedVisual *this)
{
  __int64 *v1; // rbx
  int v2; // edi

  v1 = (__int64 *)((char *)this - 240);
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 30) + 224LL))((char *)this - 240);
  if ( v2 < 0 )
    CDisplayAnimatedVisual::Stop(v1, 0);
  return (unsigned int)v2;
}
