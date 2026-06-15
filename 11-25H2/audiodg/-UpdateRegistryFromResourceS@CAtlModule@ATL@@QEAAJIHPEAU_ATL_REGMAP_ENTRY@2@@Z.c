/*
 * XREFs of ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x14008C694
 * Callers:
 *     ?UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x14008C660 (-UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z @ 0x14008C680 (-UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     memcpy_s_1 @ 0x140054C60 (memcpy_s_1.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x140059B38 (__report_rangecheckfailure.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140076A48 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x14007A000 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x1400895D4 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140089F30 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x14008B94C (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAtlModule::UpdateRegistryFromResourceS(
        ATL::CAtlModule *this,
        unsigned __int16 a2,
        int a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  struct ATL::CAtlModule *v6; // rdi
  int Error; // ebx
  HMODULE v9; // rbx
  DWORD ModuleFileNameW; // eax
  WCHAR *v11; // rdx
  unsigned int i; // ecx
  unsigned __int16 v13; // r8
  unsigned __int16 *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v20; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v22[40]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h]
  char v24; // [rsp+90h] [rbp-78h]
  WCHAR Filename[264]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 Source[520]; // [rsp+2A8h] [rbp+1A0h] BYREF
  unsigned __int16 v27; // [rsp+6B8h] [rbp+5B0h] BYREF
  _BYTE Destination[1054]; // [rsp+6BAh] [rbp+5B2h] BYREF

  v6 = ATL::_pAtlModule;
  v21[0] = &ATL::CRegObject::`vftable';
  v21[1] = 0LL;
  v21[2] = 0LL;
  *(_DWORD *)v22 = 0;
  memset(&v22[8], 0, 32);
  v23 = 0LL;
  v24 = 0;
  Error = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)&v22[8]);
  if ( Error < 0 )
    goto LABEL_2;
  Error = (*(__int64 (__fastcall **)(struct ATL::CAtlModule *, _QWORD *))(*(_QWORD *)v6 + 40LL))(v6, v21);
  if ( Error < 0 )
    goto LABEL_2;
  v19 = 0LL;
  v9 = hModule;
  ModuleFileNameW = GetModuleFileNameW(hModule, Filename, 0x104u);
  if ( !ModuleFileNameW )
  {
    Error = ATL::AtlHresultFromLastError();
LABEL_25:
    ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
    goto LABEL_2;
  }
  if ( ModuleFileNameW == 260 )
  {
    ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
    Error = -2147024774;
LABEL_2:
    ATL::CRegObject::~CRegObject((ATL::CRegObject *)v21);
    return (unsigned int)Error;
  }
  v11 = Filename;
  for ( i = 0; i < 0x207; ++i )
  {
    v13 = *v11;
    if ( !*v11 )
      break;
    Source[i] = v13;
    if ( v13 == 39 && i < 0x206 )
      Source[++i] = 39;
    ++v11;
  }
  Source[i] = 0;
  if ( v9 && v9 != GetModuleHandleW(0LL) )
  {
    v14 = Source;
LABEL_23:
    Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v21, L"Module", v14);
    if ( Error >= 0 )
    {
      Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v21, L"Module_Raw", Source);
      if ( Error >= 0 )
      {
        v20 = 0LL;
        if ( a3 )
          v18 = ATL::CRegObject::RegisterFromResource(
                  (ATL::CRegObject *)v21,
                  Filename,
                  (const unsigned __int16 *)a2,
                  L"REGISTRY",
                  1);
        else
          v18 = ATL::CRegObject::RegisterFromResource(
                  (ATL::CRegObject *)v21,
                  Filename,
                  (const unsigned __int16 *)a2,
                  L"REGISTRY",
                  0);
        Error = v18;
        ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v20);
      }
    }
    goto LABEL_25;
  }
  v27 = 34;
  v15 = -1LL;
  v16 = -1LL;
  do
    ++v16;
  while ( Source[v16] );
  if ( !memcpy_s_1(Destination, 0x414uLL, Source, 2LL * ((int)v16 + 1)) )
  {
    do
      ++v15;
    while ( *(_WORD *)&Destination[2 * v15 - 2] );
    *(_WORD *)&Destination[2 * (int)v15 - 2] = 34;
    v17 = 2LL * (int)v15 + 2;
    if ( v17 >= 0x418 )
      _report_rangecheckfailure();
    *(_WORD *)&Destination[v17 - 2] = 0;
    v14 = &v27;
    goto LABEL_23;
  }
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
  ATL::CRegObject::~CRegObject((ATL::CRegObject *)v21);
  return 2147500037LL;
}
