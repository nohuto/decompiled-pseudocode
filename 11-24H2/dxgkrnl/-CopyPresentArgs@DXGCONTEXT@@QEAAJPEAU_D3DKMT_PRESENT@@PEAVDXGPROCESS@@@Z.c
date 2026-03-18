/*
 * XREFs of ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1400358E8
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x140389364 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     DxgkSubmitPresentToHwQueue @ 0x14041D400 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1402EA4B0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1402EA590 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CopyPresentArgs(DXGPRESENT **this, struct _D3DKMT_PRESENT *a2, struct DXGPROCESS *a3)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  D3DKMT_PRESENT_RGNS **p_pPresentRegions; // rsi
  DXGPRESENT *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8

  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_WORD *)&Value & 0x8000) != 0 )
  {
    p_pPresentRegions = &a2->pPresentRegions;
    if ( (*(_DWORD *)&Value & 0x400000) != 0 || *p_pPresentRegions )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, this, a2->Flags.Value, *p_pPresentRegions);
      WdLogGlobalForLineNumber = 482;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            (__int64)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            a2->Flags.Value,
            v10,
            0LL,
            0,
            -1,
            L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            13,
            (char)this,
            a2->Flags.Value,
            (char)*p_pPresentRegions,
            0);
      }
      return 3221225485LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v9 = this[19];
    if ( v9 )
      goto LABEL_6;
    v9 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL);
    if ( v9 )
      v9 = DXGPRESENT::DXGPRESENT(v9, *((_DWORD *)this[2] + 476));
    this[19] = v9;
    if ( v9 )
    {
LABEL_6:
      *((_BYTE *)this + 435) = 1;
      return DXGPRESENT::CopyPresentArgs(v9, (struct DXGCONTEXT *)this, a2);
    }
    else
    {
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL), a3, this);
      WdLogGlobalForLineNumber = 497;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          v11,
          v12,
          0LL,
          1,
          -1,
          L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          23,
          *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL),
          (char)a3,
          (char)this,
          0);
      return 3221225495LL;
    }
  }
}
