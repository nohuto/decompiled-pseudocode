/*
 * XREFs of ?FindProperty@CFlipPropertySetBase@@QEAAXAEBU_GUID@@PEAIPEAPEBX@Z @ 0x14009F79C
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A264 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14004309C (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty(
        CFlipPropertySetBase *this,
        const struct _GUID *a2,
        unsigned int *a3,
        const void **a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // edi
  char *v7; // rbx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx

  *a4 = 0LL;
  v4 = 0;
  v5 = *((_DWORD *)this + 3);
  v7 = (char *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    v8 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v9 = 32LL * v4;
      v10 = *(_QWORD *)(v9 + v8) - *(_QWORD *)&a2->Data1;
      if ( !v10 )
        v10 = *(_QWORD *)(v9 + v8 + 8) - *(_QWORD *)a2->Data4;
      if ( !v10 )
        break;
      ++v4;
      v7 += *(unsigned int *)(v9 + v8 + 16);
      if ( v4 >= v5 )
        return;
    }
    *a3 = *(_DWORD *)(v9 + v8 + 16);
    *a4 = v7;
  }
}
