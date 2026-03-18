/*
 * XREFs of HUBDTX_CacheBillboardInfo @ 0x14002A164
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C490 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     memmove @ 0x140046600 (memmove.c)
 */

void __fastcall HUBDTX_CacheBillboardInfo(__int64 a1, unsigned __int8 *a2)
{
  __int64 Pool2; // rax
  int v5; // edx
  _QWORD *v6; // rbx
  void *v7; // rax
  int v8; // edx

  Pool2 = ExAllocatePool2(64LL, 16LL, 1748191317LL);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 8) = -1;
    v7 = (void *)ExAllocatePool2(64LL, *a2, 1748191317LL);
    *v6 = v7;
    if ( v7 )
    {
      memmove(v7, a2, *a2);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v8,
          5,
          98,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
      }
      ExFreePoolWithTag(v6, 0x68334855u);
      v6 = 0LL;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      v5,
      5,
      97,
      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
  }
  *(_QWORD *)(a1 + 2656) = v6;
}
