/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400F6FC0
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F6F2C (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x14003BABC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003ED5C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003F30C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400F7398 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 k; // rbx
  __int64 i; // rbp
  _QWORD *v7; // rcx
  unsigned __int64 j; // rdi
  _QWORD **v9; // rax
  _QWORD **v10; // rax
  _QWORD *m; // rax
  _QWORD **v12; // rax
  VIDMM_PAGE_DIRECTORY **v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  _BYTE v17[32]; // [rsp+70h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, (struct _KTHREAD **)this + 7);
  if ( (byte_140081242 & 0x40) != 0 )
  {
    v14 = *((_QWORD *)this + 12);
    if ( v14 )
    {
      v2 = *(_QWORD **)(*(_QWORD *)(v14 + 32) + 64LL);
      v14 = v2[10];
    }
    McTemplateK0ppp_EtwWriteTransfer(
      (__int64)v2,
      &ReportGpuVirtualAddressAllocator,
      v3,
      this,
      v14,
      *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
  }
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  k = 0LL;
  while ( v4 )
  {
    k = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( k )
  {
    if ( (byte_140081242 & 0x40) != 0 )
    {
      LODWORD(v15) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v15,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 11) + 6944LL); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD **)(k + 8 * i + 96);
      j = 0LL;
      while ( v7 )
      {
        j = (unsigned __int64)v7;
        v7 = (_QWORD *)*v7;
      }
      while ( j )
      {
        if ( (byte_140081242 & 0x40) != 0 )
        {
          LODWORD(v16) = *(_DWORD *)(j + 64);
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            (__int64)v7,
            &ReportGpuVirtualAddressRangeMapping,
            v3,
            this,
            *(_QWORD *)(j + 56),
            *(_QWORD *)(j + 72),
            *(_QWORD *)(j + 96),
            *(_QWORD *)(j + 104),
            *(_QWORD *)(j + 88),
            *(_QWORD *)(j + 80),
            v16,
            *(_QWORD *)(j + 112),
            *(_QWORD *)(j + 120));
        }
        v10 = *(_QWORD ***)(j + 8);
        v7 = (_QWORD *)j;
        if ( v10 )
        {
          v7 = *v10;
          for ( j = *(_QWORD *)(j + 8); v7; v7 = (_QWORD *)*v7 )
            j = (unsigned __int64)v7;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD **)j == v7 )
              break;
            v7 = (_QWORD *)j;
          }
        }
      }
    }
    v9 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v9 )
    {
      v2 = *v9;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  for ( m = (_QWORD *)*((_QWORD *)this + 5); m; m = (_QWORD *)*m )
    k = (unsigned __int64)m;
  while ( k )
  {
    if ( (byte_140081242 & 0x40) != 0 )
    {
      LODWORD(v15) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v15,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    v12 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v12 )
    {
      v2 = *v12;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  v13 = (VIDMM_PAGE_DIRECTORY **)*((_QWORD *)this + 15);
  if ( v13 && *v13 )
    VIDMM_PAGE_DIRECTORY::ReportState(*v13, this);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
}
