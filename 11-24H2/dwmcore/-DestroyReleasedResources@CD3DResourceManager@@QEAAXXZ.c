/*
 * XREFs of ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CAB1C
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x1800F2360 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CA788 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801CA98C (-Trim@CD3DDevice@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?IsValid@CD3DResource@@UEBAJXZ @ 0x1801CACD0 (-IsValid@CD3DResource@@UEBAJXZ.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1801CACE8 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x1801CAD40 (-ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x1801CAD50 (-ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802BC49C (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResourceManager::DestroyReleasedResources(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY v3; // rbx
  __int64 (__fastcall *v4)(CD3DResource *__hidden); // rax
  int IsValid; // eax
  void (__fastcall *Next)(CD3DConstantBuffer *__hidden); // rax
  struct _SLIST_ENTRY *v7; // rdx
  PSLIST_ENTRY *v8; // rcx
  __int64 (__fastcall *v9)(struct CMILPoolResource *); // rax
  __int64 (__fastcall *v10)(struct CMILPoolResource *); // rax

  v2 = InterlockedFlushSList(this + 1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = v2 - 5;
      v2 = v2->Next;
      (*((void (__fastcall **)(PSLIST_ENTRY))&v3->Next->Next + 1))(v3);
      v4 = (__int64 (__fastcall *)(CD3DResource *__hidden))*((_QWORD *)&v3->Next[1].Next + 1);
      if ( v4 == CD3DResource::IsValid )
        IsValid = CD3DResource::IsValid((CD3DResource *)v3);
      else
        IsValid = v4((CD3DResource *)v3);
      if ( IsValid >= 0 )
        CD3DResource::Invalidate((CD3DResource *)v3);
      if ( BYTE4(v3[7].Next) )
      {
        if ( BYTE5(v3[7].Next) )
          CD2DContext::RemoveHwProtectedResource((CD2DContext *)(this[5].Alignment + 16));
        --*((_DWORD *)&this[4].HeaderX64 + 2);
      }
      Next = (void (__fastcall *)(CD3DConstantBuffer *__hidden))v3->Next[7].Next;
      if ( Next == CD3DConstantBuffer::ReleaseD3DResources )
      {
        CD3DConstantBuffer::ReleaseD3DResources((CD3DConstantBuffer *)v3);
      }
      else if ( Next == CD3DPixelShader::ReleaseD3DResources )
      {
        CD3DPixelShader::ReleaseD3DResources((CD3DPixelShader *)v3);
      }
      else
      {
        Next((CD3DConstantBuffer *)v3);
      }
      *((_QWORD *)&v3[2].Next + 1) = 0LL;
      v7 = v3[6].Next;
      if ( *(&v7->Next + 1) != &v3[6] || (v8 = (PSLIST_ENTRY *)*((_QWORD *)&v3[6].Next + 1), *v8 != &v3[6]) )
        __fastfail(3u);
      *v8 = v7;
      *((_QWORD *)&v7->Next + 1) = v8;
      LODWORD(this[3].Alignment) -= LODWORD(v3[7].Next);
      v9 = (__int64 (__fastcall *)(struct CMILPoolResource *))v3->Next[1].Next;
      if ( v9 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
        CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((struct CMILPoolResource *)v3);
      else
        v9((struct CMILPoolResource *)v3);
      v10 = (__int64 (__fastcall *)(struct CMILPoolResource *))v3->Next[1].Next;
      if ( v10 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
        CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((struct CMILPoolResource *)v3);
      else
        v10((struct CMILPoolResource *)v3);
      if ( !v2 )
      {
        v2 = InterlockedFlushSList(this + 1);
        if ( !v2 )
          break;
      }
    }
  }
}
