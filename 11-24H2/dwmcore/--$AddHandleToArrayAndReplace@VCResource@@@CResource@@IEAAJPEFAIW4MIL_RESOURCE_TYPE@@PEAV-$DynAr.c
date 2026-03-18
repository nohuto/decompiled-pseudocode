/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1801AAC00
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180130ED4 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1801AAD4C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  int v14; // esi
  unsigned int v16; // eax
  struct CResource *v17; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v7 = *a2;
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v17 = Resource;
    if ( !Resource )
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x25Fu, 0LL);
      return v6;
    }
    v11 = CResource::RegisterNotifier(this, Resource);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x263u, 0LL);
      return v6;
    }
    v12 = *(_DWORD *)(a4 + 24);
    v13 = v12 + 1;
    if ( (unsigned int)v13 < v12 )
    {
      v6 = -2147024362;
      v16 = 181;
      v14 = -2147024362;
    }
    else
    {
      v14 = 0;
      if ( (unsigned int)v13 <= *(_DWORD *)(a4 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * v12) = v17;
        *(_DWORD *)(a4 + 24) = v13;
LABEL_7:
        v6 = v14;
        *a2 = *(_DWORD *)(a4 + 24) - 1;
        return v6;
      }
      v14 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8LL, v13, &v17);
      v6 = v14;
      if ( v14 >= 0 )
        goto LABEL_7;
      v16 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v16, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x269u, 0LL);
    CResource::UnRegisterNotifierInternal(this, v17);
  }
  return v6;
}
