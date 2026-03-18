/*
 * XREFs of ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x140049050
 * Callers:
 *     DxgkFreeAdlCB @ 0x140048FF0 (DxgkFreeAdlCB.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403C26E0 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1403D9024 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     SmmFreeAdl @ 0x140049110 (SmmFreeAdl.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140092F28 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

void __fastcall SysMmFreeAdl(struct SYSMM_ADAPTER_OBJECT *a1, struct _DXGK_ADL *a2)
{
  __int64 **v3; // rdi
  bool v4; // zf
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 **v7; // rdx

  v3 = (__int64 **)((char *)a2 - 8);
  ExAcquirePushLockExclusiveEx((char *)a1 - 32, 0LL);
  v4 = (*((_DWORD *)a1 + 8))-- == 1;
  if ( v4 && (dword_14015E600 & 0x18) == 0x10 )
  {
    SmmFreeLogicalAddress(
      *(struct SYSMM_LOGICAL_ALLOCATOR **)(*((_QWORD *)a1 + 2) + 384LL),
      *((struct SYSMM_LOGICAL_BLOCK **)a1 + 3));
    *((_QWORD *)a1 + 3) = 0LL;
  }
  if ( (dword_14015E600 & 0x20) != 0 )
  {
    v5 = *v3;
    v5[2] = 0LL;
    v6 = *v5;
    if ( *v5 )
    {
      if ( *(__int64 **)(v6 + 8) != v5 || (v7 = (__int64 **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v7;
    }
  }
  ExReleasePushLockExclusiveEx((char *)a1 - 32, 0LL);
  SmmFreeAdl(v3);
}
