/*
 * XREFs of ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEBUDEVICE_GRAPH_CONNECTION_DESCRIPTOR@@PEAPEAUIDeviceGraphConnectionBuffer@@@Z @ 0x140010510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000EEA4 (-GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ??0CDeviceGraphConnectionBuffer@@QEAA@PEAUIDeviceGraphBuffer@@_K@Z @ 0x140011600 (--0CDeviceGraphConnectionBuffer@@QEAA@PEAUIDeviceGraphBuffer@@_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::AllocateConnectionBuffer(
        CDeviceGraphObjectCache *this,
        struct IAudioMediaType **a2,
        struct IDeviceGraphConnectionBuffer **a3)
{
  unsigned __int64 v6; // r8
  DWORD v7; // r10d
  unsigned __int64 v8; // r8
  DWORD v9; // r9d
  unsigned int v10; // edi
  unsigned int v11; // r11d
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdi
  struct IDeviceGraphBuffer *v18; // rbx
  CDeviceGraphConnectionBuffer *v19; // rax
  struct IDeviceGraphConnectionBuffer *v20; // rax
  __int64 v22; // rdx
  _UNCOMPRESSEDAUDIOFORMAT v23; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDeviceGraphBuffer *v25; // [rsp+78h] [rbp+28h] BYREF

  *(_OWORD *)&v23.dwSamplesPerFrame = 0LL;
  GetAudioFormat(a2[1], &v23);
  v6 = v23.dwBytesPerSampleContainer * (unsigned __int64)v23.dwSamplesPerFrame;
  if ( v6 > 0xFFFFFFFF )
  {
    v22 = 662LL;
LABEL_15:
    v16 = -2147024362;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)v16);
    return v16;
  }
  v7 = *(_DWORD *)a2;
  v8 = (unsigned int)v6 * (unsigned __int64)*(unsigned int *)a2;
  if ( v8 > 0xFFFFFFFF )
  {
    v22 = 666LL;
    goto LABEL_15;
  }
  v9 = v23.dwBytesPerSampleContainer * v23.dwSamplesPerFrame;
  v10 = 15;
  v11 = 16;
  if ( v23.dwBytesPerSampleContainer * v23.dwSamplesPerFrame > 0x10 )
  {
    v10 = v9 - 1;
    if ( ((v9 - 1) & v9) != 0 )
    {
      do
        v11 *= 2;
      while ( v9 / v11 );
      v10 = v11 - 1;
    }
  }
  v12 = v10 + (unsigned int)v8;
  if ( (unsigned int)v12 < (unsigned int)v8 )
  {
    v22 = 672LL;
    goto LABEL_15;
  }
  if ( v7 <= v23.dwBytesPerSampleContainer * v23.dwSamplesPerFrame )
    v7 = v23.dwBytesPerSampleContainer * v23.dwSamplesPerFrame;
  if ( (unsigned int)v12 < v7 )
  {
    v16 = -2147024809;
    v22 = 675LL;
    goto LABEL_16;
  }
  v13 = (__int64 *)*((_QWORD *)this + 5);
  v14 = *v13;
  v25 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IDeviceGraphBuffer **))(v14 + 24))(v13, v12, &v25);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v15);
    if ( v25 )
      (*(void (__fastcall **)(struct IDeviceGraphBuffer *))(*(_QWORD *)v25 + 16LL))(v25);
    return v16;
  }
  v17 = ~(unsigned __int64)v10 & (v10
                                + (*(__int64 (__fastcall **)(struct IDeviceGraphBuffer *))(*(_QWORD *)v25 + 24LL))(v25));
  v18 = v25;
  v19 = (CDeviceGraphConnectionBuffer *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v19 )
  {
    *a3 = 0LL;
LABEL_21:
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AF,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL);
    if ( v25 )
      (*(void (__fastcall **)(struct IDeviceGraphBuffer *))(*(_QWORD *)v25 + 16LL))(v25);
    return v16;
  }
  v20 = CDeviceGraphConnectionBuffer::CDeviceGraphConnectionBuffer(v19, v18, v17);
  *a3 = v20;
  if ( !v20 )
    goto LABEL_21;
  if ( v25 )
    (*(void (__fastcall **)(struct IDeviceGraphBuffer *))(*(_QWORD *)v25 + 16LL))(v25);
  return 0LL;
}
