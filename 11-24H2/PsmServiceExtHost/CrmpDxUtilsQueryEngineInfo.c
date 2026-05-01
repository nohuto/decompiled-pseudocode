/*
 * XREFs of CrmpDxUtilsQueryEngineInfo @ 0x18007B308
 * Callers:
 *     CrmStateMonitorNpuUsageQuery @ 0x18007A0BC (CrmStateMonitorNpuUsageQuery.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??$GetPropertyWithInput@KK@IDXCoreAdapter1@@QEAAJW4DXCoreAdapterProperty@@PEBKPEAK@Z @ 0x18007B198 (--$GetPropertyWithInput@KK@IDXCoreAdapter1@@QEAAJW4DXCoreAdapterProperty@@PEBKPEAK@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmpDxUtilsQueryEngineInfo(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 *v3; // r12
  unsigned int v4; // ebx
  _QWORD *Heap; // rdi
  __int64 v6; // rax
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int PropertyWith; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r15d
  int v13; // ebx
  __int64 v14; // rdx
  unsigned int i; // esi
  __int64 v16; // r12
  unsigned int v18; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-35h] BYREF
  __int64 v20; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-25h]
  __int64 *v23; // [rsp+58h] [rbp-21h]
  unsigned int *v24; // [rsp+60h] [rbp-19h]
  _QWORD *v25; // [rsp+68h] [rbp-11h]
  unsigned __int64 v26; // [rsp+70h] [rbp-9h] BYREF
  int v27; // [rsp+78h] [rbp-1h]
  __int128 v28; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(__int64 **)(a1 + 8);
  v4 = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v19 = 0;
  v21 = 0;
  Heap = 0LL;
  v18 = 0;
  v20 = 0LL;
  v6 = *v3;
  v25 = a3;
  v24 = a2;
  v23 = v3;
  v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 32))(v3);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    do
    {
      PropertyWith = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(*v3 + 24))(
                       v3,
                       v9,
                       &GUID_a0783366_cfa3_43be_9d79_55b2da97c63c,
                       &v20);
      if ( PropertyWith < 0 )
        goto LABEL_14;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 64LL))(v20, 4LL) )
      {
        v4 = -1073741637;
        goto LABEL_27;
      }
      PropertyWith = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *))(*(_QWORD *)v20 + 48LL))(
                       v20,
                       15LL,
                       4LL,
                       &v19);
      if ( PropertyWith < 0 )
        goto LABEL_14;
      v4 = 0;
      v18 = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          PropertyWith = IDXCoreAdapter1::GetPropertyWithInput<unsigned long,unsigned long>(
                           v20,
                           v11,
                           (__int64)&v18,
                           (__int64)&v21);
          if ( PropertyWith < 0 )
            break;
          v8 += v21;
          if ( ++v18 >= v19 )
          {
            v4 = 0;
            goto LABEL_9;
          }
        }
LABEL_14:
        v4 = PropertyWith | 0xC0000000;
        goto LABEL_27;
      }
LABEL_9:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      ++v9;
      v20 = 0LL;
    }
    while ( v9 < v7 );
    if ( v8 )
    {
      Heap = HampAllocateHeap(8LL * v8);
      if ( !Heap )
      {
        v4 = -1073741801;
        goto LABEL_27;
      }
    }
  }
  v22 = 0;
  v12 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(*v3 + 24))(
              v3,
              v12,
              &GUID_a0783366_cfa3_43be_9d79_55b2da97c63c,
              &v20);
      if ( v13 < 0 )
        break;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *))(*(_QWORD *)v20 + 48LL))(
              v20,
              15LL,
              4LL,
              &v19);
      if ( v13 < 0 )
        break;
      v4 = 0;
      v18 = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          v13 = IDXCoreAdapter1::GetPropertyWithInput<unsigned long,unsigned long>(
                  v20,
                  v14,
                  (__int64)&v18,
                  (__int64)&v21);
          if ( v13 < 0 )
            goto LABEL_30;
          v4 = 0;
          for ( i = 0; i < v21; v4 = 0 )
          {
            v16 = v22++;
            Heap[v16] = -1LL;
            v26 = __PAIR64__(i, v18);
            v27 = 0;
            v28 = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64 *, __int64, __int128 *))(*(_QWORD *)v20 + 72LL))(
                    v20,
                    4LL,
                    12LL,
                    &v26,
                    16LL,
                    &v28);
            if ( v13 < 0 )
              goto LABEL_30;
            ++i;
            Heap[v16] = v28;
          }
          if ( ++v18 >= v19 )
          {
            v3 = v23;
            break;
          }
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      ++v12;
      v20 = 0LL;
      if ( v12 >= v7 )
        goto LABEL_26;
    }
LABEL_30:
    v4 = v13 | 0xC0000000;
    if ( Heap )
      HampFreeHeap(Heap);
  }
  else
  {
LABEL_26:
    *v24 = v8;
    *v25 = Heap;
  }
LABEL_27:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v4;
}
