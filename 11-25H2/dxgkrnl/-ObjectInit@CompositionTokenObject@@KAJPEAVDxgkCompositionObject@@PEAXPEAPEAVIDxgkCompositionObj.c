/*
 * XREFs of ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14000C200
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        unsigned int *a2,
        struct IDxgkCompositionObject **a3,
        __int64 a4)
{
  char *v4; // rdi
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // kr00_8
  __int64 Pool2; // rax
  int v9; // ebx
  unsigned int *v10; // rbp
  char *v11; // r13
  __int64 v12; // r15
  unsigned int v13; // r12d
  __int64 v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // r9d
  __int64 v17; // r11
  void *v18; // r10
  __int64 v19; // rax
  NTSTATUS v20; // eax
  PVOID v21; // rsi
  __int64 v22; // rsi
  CPushLock *v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // eax
  int v27; // ecx
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // [rsp+60h] [rbp-58h]
  PVOID Object; // [rsp+C0h] [rbp+8h] BYREF
  char *v35; // [rsp+C8h] [rbp+10h]
  __int64 v36; // [rsp+D0h] [rbp+18h]
  __int64 v37; // [rsp+D8h] [rbp+20h]

  v4 = (char *)a1 + 32;
  if ( a1 )
  {
    *(_QWORD *)a1 = &SetElement::`vftable';
    *((_DWORD *)a1 + 16) = 6;
    *((_QWORD *)a1 + 9) = 0LL;
    *((_DWORD *)a1 + 20) = 0;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    *(_QWORD *)v4 = &CCompositionToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 5) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)a1 + 13) = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_DWORD *)a1 + 32) = 0;
  }
  *a3 = (struct IDxgkCompositionObject *)v4;
  *((_DWORD *)a1 + 16) = 0;
  v7 = a2[3];
  v6 = a2[3] * (unsigned __int128)0x20uLL;
  v36 = *((_QWORD *)&v6 + 1);
  if ( !is_mul_ok(v7, 0x20uLL) )
  {
    v9 = -1073741675;
LABEL_37:
    (*(void (__fastcall **)(char *))(*((_QWORD *)v4 + 1) + 56LL))(v4 + 8);
    return (unsigned int)v9;
  }
  if ( !(_QWORD)v6 )
  {
    *(_QWORD *)&v6 = 1LL;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v6 <= 0x7FFFFFFF )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(256LL, v6, 1650675028LL, a4);
    goto LABEL_7;
  }
  Pool2 = 0LL;
LABEL_7:
  *((_QWORD *)v4 + 9) = Pool2;
  v9 = 0;
  v10 = (unsigned int *)(v4 + 80);
  *((_DWORD *)v4 + 20) = 0;
  if ( !Pool2 )
    v9 = -1073741801;
  if ( v9 < 0 )
    goto LABEL_37;
  v9 = 0;
  v11 = v4 + 72;
  v12 = 0LL;
  v13 = 0;
  while ( v13 < a2[2] )
  {
    v14 = *(_QWORD *)a2;
    v15 = 0;
    v16 = *v10;
    v33 = *(_QWORD *)a2;
    v17 = 3LL * v13;
    v18 = *(void **)(*(_QWORD *)a2 + 24LL * v13);
    v37 = v17;
    while ( v15 < v16 )
    {
      if ( v18 == *(void **)(*(_QWORD *)v11 + 32LL * v15) )
      {
        v12 = *(_QWORD *)v11 + 32LL * v15;
        break;
      }
      ++v15;
    }
    v19 = *v10;
    if ( v15 != (_DWORD)v19 )
      goto LABEL_15;
    if ( (unsigned int)v19 >= a2[3] )
      goto LABEL_36;
    v35 = v4 + 72;
    v11 = v4 + 72;
    Object = 0LL;
    v12 = *((_QWORD *)v4 + 9) + 32 * v19;
    *(_QWORD *)v12 = v18;
    *(_QWORD *)(v12 + 8) = 0LL;
    v20 = ObReferenceObjectByHandle(v18, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
    v21 = Object;
    v9 = v20;
    if ( v20 < 0 )
      goto LABEL_26;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) != 1 )
    {
      ObfDereferenceObject(v21);
      v9 = -1073741788;
LABEL_26:
      if ( v9 < 0 )
        goto LABEL_17;
      goto LABEL_27;
    }
    *(_QWORD *)(v12 + 8) = v21;
LABEL_27:
    ++*v10;
    v22 = *(_QWORD *)(v12 + 8);
    v23 = (CPushLock *)(v22 + 48);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v22 + 48, 0LL);
    v9 = 0;
    *(_QWORD *)(v22 + 56) = PsGetCurrentThreadId();
    if ( *(_DWORD *)(v22 + 136)
      && (v24 = *(_QWORD *)(v22 + 120) - 24LL, *(_BYTE *)(v24 + 40))
      && v24
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 88LL))(v24) )
    {
      v25 = *(_QWORD *)(v24 + 16);
    }
    else
    {
      v9 = -1073741275;
      v25 = 0LL;
    }
    *(_QWORD *)(v12 + 16) = v25;
    CPushLock::ReleaseLock(v23);
    if ( v9 >= 0 )
    {
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2604;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              2604,
              v29,
              v30,
              0,
              2,
              -1,
              (__int64)L"m_pGlobal != NULL",
              44,
              0,
              0,
              0,
              0);
        }
      }
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304872LL) + 40LL))(v12 + 24);
      v17 = v37;
      v9 = v26;
      v14 = v33;
      v11 = v35;
LABEL_15:
      if ( v9 >= 0 )
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 24) + 40LL))(
               *(_QWORD *)(v12 + 24),
               v14 + 8 * (v17 + 1));
      goto LABEL_17;
    }
    v11 = v35;
LABEL_17:
    ++v13;
    if ( v9 < 0 )
      goto LABEL_37;
  }
  v27 = *((_DWORD *)v4 + 20);
  if ( v27 != a2[3] )
  {
LABEL_36:
    v9 = -1073741811;
    goto LABEL_37;
  }
  v31 = 0;
  if ( v27 )
  {
    do
    {
      v32 = v31++;
      *(_QWORD *)(32 * v32 + *((_QWORD *)v4 + 9)) = 0LL;
    }
    while ( v31 < *((_DWORD *)v4 + 20) );
  }
  *((_QWORD *)v4 + 11) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v4 + 24) = *((_DWORD *)v4 + 20);
  return (unsigned int)v9;
}
