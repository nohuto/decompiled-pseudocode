/*
 * XREFs of ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18006C310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawTileImageInstruction::WriteInstruction(
        CDrawTileImageInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 i; // rax
  __int128 v5; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0LL;
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v5 + i) = (float)*((int *)this + i + 4);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD, __int128 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 24LL),
           &v5);
}
