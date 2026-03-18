/*
 * XREFs of ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x14001DBCC
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033599C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE(
        ENSURE_CONTEXT_ARRAY_DEREFERENCE *this)
{
  __int64 i; // r14
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  bool v6; // r8
  bool v7; // r8
  struct DXGADAPTER *v8; // rdx
  const char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _BYTE v14[8]; // [rsp+28h] [rbp-91h] BYREF
  __int64 v15; // [rsp+30h] [rbp-89h]
  char v16; // [rsp+38h] [rbp-81h]
  _BYTE v17[16]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v19[64]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v20[64]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+1Fh]
  char v22; // [rsp+E0h] [rbp+27h]

  if ( *(_QWORD *)this )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
      if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v17,
          (struct DXGDEVICE *)v4);
        v5 = *(_QWORD *)(v3 + 16);
        v16 = 0;
        v15 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
        COREACCESS::COREACCESS((COREACCESS *)v19, *(struct DXGADAPTER *const *)(*(_QWORD *)(v4 + 16) + 16LL), v6);
        v8 = *(struct DXGADAPTER **)(v4 + 1880);
        if ( !v8 )
          v8 = *(struct DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL);
        COREACCESS::COREACCESS((COREACCESS *)v20, v8, v7);
        v10 = *(_QWORD *)(v4 + 16);
        v11 = *(_QWORD *)(v4 + 1880);
        v21 = v4;
        if ( v11 == *(_QWORD *)(v10 + 16) || (v22 = 1, !v11) )
          v22 = 0;
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v18, v9);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v4, (struct DXGCONTEXT *)v3, (struct COREDEVICEACCESS *)v18);
        COREACCESS::~COREACCESS((COREACCESS *)v20, v12);
        COREACCESS::~COREACCESS((COREACCESS *)v19, v13);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
      }
    }
  }
}
