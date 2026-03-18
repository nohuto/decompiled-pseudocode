/*
 * XREFs of ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14001B6E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        unsigned int *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rdi
  unsigned __int128 v5; // rax
  unsigned __int64 v6; // kr00_8
  __int64 Pool2; // rax
  int v8; // ebx
  unsigned int *v9; // rbp
  char *v10; // r13
  __int64 v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // rsi
  unsigned int v14; // edx
  unsigned int v15; // r9d
  __int64 v16; // r11
  void *v17; // r10
  __int64 v18; // rax
  NTSTATUS v19; // eax
  PVOID v20; // rsi
  __int64 v21; // rsi
  CPushLock *v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  int v26; // ecx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // [rsp+60h] [rbp-58h]
  PVOID Object; // [rsp+C0h] [rbp+8h] BYREF
  char *v34; // [rsp+C8h] [rbp+10h]
  __int64 v35; // [rsp+D0h] [rbp+18h]
  __int64 v36; // [rsp+D8h] [rbp+20h]

  v3 = (char *)a1 + 32;
  if ( a1 )
  {
    *(_QWORD *)a1 = &SetElement::`vftable';
    *((_DWORD *)a1 + 16) = 6;
    *((_QWORD *)a1 + 9) = 0LL;
    *((_DWORD *)a1 + 20) = 0;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    *(_QWORD *)v3 = &CCompositionToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 5) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)a1 + 13) = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_DWORD *)a1 + 32) = 0;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  *((_DWORD *)a1 + 16) = 0;
  v6 = a2[3];
  v5 = a2[3] * (unsigned __int128)0x20uLL;
  v35 = *((_QWORD *)&v5 + 1);
  if ( !is_mul_ok(v6, 0x20uLL) )
  {
    v8 = -1073741675;
LABEL_37:
    (*(void (__fastcall **)(char *))(*((_QWORD *)v3 + 1) + 56LL))(v3 + 8);
    return (unsigned int)v8;
  }
  if ( !(_QWORD)v5 )
  {
    *(_QWORD *)&v5 = 1LL;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v5 <= 0x7FFFFFFF )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(256LL, v5, 1650675028LL);
    goto LABEL_7;
  }
  Pool2 = 0LL;
LABEL_7:
  *((_QWORD *)v3 + 9) = Pool2;
  v8 = 0;
  v9 = (unsigned int *)(v3 + 80);
  *((_DWORD *)v3 + 20) = 0;
  if ( !Pool2 )
    v8 = -1073741801;
  if ( v8 < 0 )
    goto LABEL_37;
  v8 = 0;
  v10 = v3 + 72;
  v11 = 0LL;
  v12 = 0;
  while ( v12 < a2[2] )
  {
    v13 = *(_QWORD *)a2;
    v14 = 0;
    v15 = *v9;
    v32 = *(_QWORD *)a2;
    v16 = 3LL * v12;
    v17 = *(void **)(*(_QWORD *)a2 + 24LL * v12);
    v36 = v16;
    while ( v14 < v15 )
    {
      if ( v17 == *(void **)(*(_QWORD *)v10 + 32LL * v14) )
      {
        v11 = *(_QWORD *)v10 + 32LL * v14;
        break;
      }
      ++v14;
    }
    v18 = *v9;
    if ( v14 != (_DWORD)v18 )
      goto LABEL_15;
    if ( (unsigned int)v18 >= a2[3] )
      goto LABEL_36;
    v34 = v3 + 72;
    v10 = v3 + 72;
    Object = 0LL;
    v11 = *((_QWORD *)v3 + 9) + 32 * v18;
    *(_QWORD *)v11 = v17;
    *(_QWORD *)(v11 + 8) = 0LL;
    v19 = ObReferenceObjectByHandle(v17, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
    v20 = Object;
    v8 = v19;
    if ( v19 < 0 )
      goto LABEL_26;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) != 1 )
    {
      ObfDereferenceObject(v20);
      v8 = -1073741788;
LABEL_26:
      if ( v8 < 0 )
        goto LABEL_17;
      goto LABEL_27;
    }
    *(_QWORD *)(v11 + 8) = v20;
LABEL_27:
    ++*v9;
    v21 = *(_QWORD *)(v11 + 8);
    v22 = (CPushLock *)(v21 + 48);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v21 + 48, 0LL);
    v8 = 0;
    *(_QWORD *)(v21 + 56) = PsGetCurrentThreadId();
    if ( *(_DWORD *)(v21 + 176)
      && (v23 = *(_QWORD *)(v21 + 160) - 24LL, *(_BYTE *)(v23 + 40))
      && v23
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23) )
    {
      v24 = *(_QWORD *)(v23 + 16);
    }
    else
    {
      v8 = -1073741275;
      v24 = 0LL;
    }
    *(_QWORD *)(v11 + 16) = v24;
    CPushLock::ReleaseLock(v22);
    if ( v8 >= 0 )
    {
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2605;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(2605LL, v28, v29, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
        }
      }
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 40LL))(v11 + 24);
      v16 = v36;
      v8 = v25;
      v13 = v32;
      v10 = v34;
LABEL_15:
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11 + 24) + 40LL))(
               *(_QWORD *)(v11 + 24),
               v13 + 8 * (v16 + 1));
      goto LABEL_17;
    }
    v10 = v34;
LABEL_17:
    ++v12;
    if ( v8 < 0 )
      goto LABEL_37;
  }
  v26 = *((_DWORD *)v3 + 20);
  if ( v26 != a2[3] )
  {
LABEL_36:
    v8 = -1073741811;
    goto LABEL_37;
  }
  v30 = 0;
  if ( v26 )
  {
    do
    {
      v31 = v30++;
      *(_QWORD *)(32 * v31 + *((_QWORD *)v3 + 9)) = 0LL;
    }
    while ( v30 < *((_DWORD *)v3 + 20) );
  }
  *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v3 + 24) = *((_DWORD *)v3 + 20);
  return (unsigned int)v8;
}
