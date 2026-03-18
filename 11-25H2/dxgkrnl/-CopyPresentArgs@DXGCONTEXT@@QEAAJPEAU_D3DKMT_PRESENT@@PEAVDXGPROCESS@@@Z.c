/*
 * XREFs of ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x140035AB0
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     DxgkSubmitPresentToHwQueue @ 0x140420F70 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1402F09C0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1402F0AA0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CopyPresentArgs(DXGCONTEXT *this, struct _D3DKMT_PRESENT *a2, struct DXGPROCESS *a3)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  D3DKMT_PRESENT_RGNS **p_pPresentRegions; // rsi
  DXGPRESENT *v9; // rax
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // r8

  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_WORD *)&Value & 0x8000) != 0 )
  {
    p_pPresentRegions = &a2->pPresentRegions;
    if ( (*(_DWORD *)&Value & 0x400000) != 0 || *p_pPresentRegions )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, this, a2->Flags.Value, *p_pPresentRegions);
      WdLogGlobalForLineNumber = 481;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            (unsigned int)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            a2->Flags.Value,
            v10,
            0LL,
            0,
            -1,
            L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            -1073741811LL,
            this,
            a2->Flags.Value,
            *p_pPresentRegions,
            0LL);
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
    v9 = (DXGPRESENT *)*((_QWORD *)this + 19);
    if ( v9 )
      goto LABEL_6;
    v9 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL);
    if ( v9 )
      v9 = DXGPRESENT::DXGPRESENT(v9, *(_DWORD *)(*((_QWORD *)this + 2) + 1888LL));
    *((_QWORD *)this + 19) = v9;
    if ( v9 )
    {
LABEL_6:
      *((_BYTE *)this + 435) = 1;
      return DXGPRESENT::CopyPresentArgs(v9, this, a2);
    }
    else
    {
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), a3, this);
      WdLogGlobalForLineNumber = 496;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          (unsigned int)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          v11,
          v12,
          0LL,
          1,
          -1,
          L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          -1073741801LL,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          a3,
          this,
          0LL);
      return 3221225495LL;
    }
  }
}
