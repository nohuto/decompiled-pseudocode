/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400F4620
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F458C (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1400249FC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003CA7C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003D274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400F4A10 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 m; // rbx
  unsigned int i; // ebp
  unsigned __int64 k; // rdi
  _QWORD *j; // rcx
  _QWORD **v9; // rax
  _QWORD **v10; // rax
  _QWORD *n; // rax
  _QWORD **v12; // rax
  VIDMM_PAGE_DIRECTORY **v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 ProcessID; // rax
  __int64 v17; // [rsp+20h] [rbp-78h]
  __int64 v18; // [rsp+50h] [rbp-48h]
  _BYTE v19[32]; // [rsp+70h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 7);
  if ( (byte_140081242 & 0x40) != 0 )
  {
    v14 = *((_QWORD *)this + 12);
    v15 = *(_QWORD *)(*((_QWORD *)this + 11) + 24LL);
    if ( v14 )
      ProcessID = DXGPROCESS::GetProcessID(*(DXGPROCESS **)(v14 + 32));
    else
      ProcessID = 0LL;
    McTemplateK0ppp_EtwWriteTransfer(v14, &ReportGpuVirtualAddressAllocator, v3, this, ProcessID, v15);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  m = 0LL;
  while ( v4 )
  {
    m = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( m )
  {
    if ( (byte_140081242 & 0x40) != 0 )
    {
      LODWORD(v17) = *(_DWORD *)(m + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v17,
        *(_QWORD *)(m + 24),
        *(_QWORD *)(m + 32));
    }
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 11) + 6944LL); ++i )
    {
      k = 0LL;
      for ( j = *(_QWORD **)(m + 24 * (i + 4LL)); j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
      while ( k )
      {
        if ( (byte_140081242 & 0x40) != 0 )
        {
          LODWORD(v18) = *(_DWORD *)(k + 64);
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            (__int64)j,
            &ReportGpuVirtualAddressRangeMapping,
            v3,
            this,
            *(_QWORD *)(k + 56),
            *(_QWORD *)(k + 72),
            *(_QWORD *)(k + 96),
            *(_QWORD *)(k + 104),
            *(_QWORD *)(k + 88),
            *(_QWORD *)(k + 80),
            v18,
            *(_QWORD *)(k + 112),
            *(_QWORD *)(k + 120));
        }
        v10 = *(_QWORD ***)(k + 8);
        j = (_QWORD *)k;
        if ( v10 )
        {
          j = *v10;
          for ( k = *(_QWORD *)(k + 8); j; j = (_QWORD *)*j )
            k = (unsigned __int64)j;
        }
        else
        {
          while ( 1 )
          {
            k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !k || *(_QWORD **)k == j )
              break;
            j = (_QWORD *)k;
          }
        }
      }
    }
    v9 = *(_QWORD ***)(m + 8);
    v2 = (_QWORD *)m;
    if ( v9 )
    {
      v2 = *v9;
      for ( m = *(_QWORD *)(m + 8); v2; v2 = (_QWORD *)*v2 )
        m = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !m || *(_QWORD **)m == v2 )
          break;
        v2 = (_QWORD *)m;
      }
    }
  }
  for ( n = (_QWORD *)*((_QWORD *)this + 5); n; n = (_QWORD *)*n )
    m = (unsigned __int64)n;
  while ( m )
  {
    if ( (byte_140081242 & 0x40) != 0 )
    {
      LODWORD(v17) = *(_DWORD *)(m + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v17,
        *(_QWORD *)(m + 24),
        *(_QWORD *)(m + 32));
    }
    v12 = *(_QWORD ***)(m + 8);
    v2 = (_QWORD *)m;
    if ( v12 )
    {
      v2 = *v12;
      for ( m = *(_QWORD *)(m + 8); v2; v2 = (_QWORD *)*v2 )
        m = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !m || *(_QWORD **)m == v2 )
          break;
        v2 = (_QWORD *)m;
      }
    }
  }
  v13 = (VIDMM_PAGE_DIRECTORY **)*((_QWORD *)this + 15);
  if ( v13 && *v13 )
    VIDMM_PAGE_DIRECTORY::ReportState(*v13, this);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
}
