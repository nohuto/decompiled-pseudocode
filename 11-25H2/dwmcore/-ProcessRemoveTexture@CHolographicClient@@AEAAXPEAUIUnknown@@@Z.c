/*
 * XREFs of ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802DEB94
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802DE2A8 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1802DEEF0 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessRemoveTexture(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v4 = 0;
  v9 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v9) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3), v9);
    v5 = *((unsigned int *)this + 16);
    v6 = *((_QWORD *)this + 5);
    v7 = v9;
    if ( (_DWORD)v5 )
    {
      do
      {
        if ( v9 == *(_QWORD *)(v6 + 8LL * v4) )
          break;
        ++v4;
      }
      while ( v4 < (unsigned int)v5 );
    }
    if ( v4 < (unsigned int)v5 )
    {
      if ( v4 < (int)v5 - 1 )
      {
        do
        {
          v8 = v4++;
          *(_QWORD *)(v6 + 8 * v8) = *(_QWORD *)(v6 + 8LL * v4);
          v5 = *((unsigned int *)this + 16);
        }
        while ( v4 < (int)v5 - 1 );
        v7 = v9;
      }
      *((_DWORD *)this + 16) = v5 - 1;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5, v6);
      v7 = v9;
    }
    ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v7);
  }
}
