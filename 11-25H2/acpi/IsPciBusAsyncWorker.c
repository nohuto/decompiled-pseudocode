/*
 * XREFs of IsPciBusAsyncWorker @ 0x14001EA60
 * Callers:
 *     IsPciBusAsync @ 0x14001E9A0 (IsPciBusAsync.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     IsPciBusAsync @ 0x14001E9A0 (IsPciBusAsync.c)
 *     AcpipFreePciBusState @ 0x14001EFF4 (AcpipFreePciBusState.c)
 *     PciConfigInternal @ 0x14001F82C (PciConfigInternal.c)
 *     ACPIConvertStringDelimitation @ 0x140020580 (ACPIConvertStringDelimitation.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsPciBusAsyncWorker(__int64 a1, int a2, int a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r14
  __int64 *v12; // rbp
  const char *v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 *v16; // rbp
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbp
  _BYTE *v22; // rax
  unsigned int v23; // edi
  void *v24; // rcx
  void *v25; // rcx
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  _BYTE *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 10);
  v7 = (__int64 *)*a4;
  if ( !*a4 )
    goto LABEL_52;
  if ( a2 < 0 )
    goto LABEL_52;
  v8 = *(_QWORD *)(*v7 + 104);
  if ( !v8 )
    goto LABEL_52;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    v33 = (_BYTE *)a4[8];
    goto LABEL_65;
  }
  if ( (v9 & 0x100000000LL) != 0 )
  {
LABEL_52:
    v22 = (_BYTE *)a4[8];
    goto LABEL_23;
  }
  v10 = *((_DWORD *)a4 + 2);
  if ( (v10 & 1) == 0 )
  {
    v11 = (__int64)(a4 + 2);
    *((_DWORD *)a4 + 2) = v10 | 1;
    a4[2] = 0LL;
    v12 = AMLIGetNamedChild(v7, 1145653343);
    if ( v12 )
    {
      v6 = ACPIGet(*a4, 1145653343, 738722310, 0LL, 0, (__int64)IsPciBusAsyncWorker, (__int64)a4, v11, 0LL);
      AMLIDereferenceHandleEx((__int64)v12);
      if ( v6 == 259 )
        return 259LL;
      if ( v6 < 0 )
        goto LABEL_22;
    }
  }
  v13 = (const char *)a4[2];
  if ( v13 )
  {
    if ( strstr(v13, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[2], 0LL) )
        ExFreePoolWithTag((PVOID)a4[2], 0);
      _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x21u);
      a4[2] = 0LL;
      goto LABEL_64;
    }
    ExFreePoolWithTag((PVOID)a4[2], 0);
    a4[2] = 0LL;
  }
  v14 = *((_DWORD *)a4 + 2);
  if ( (v14 & 0x80u) == 0 )
  {
    v15 = (__int64 *)*a4;
    a4[3] = 0LL;
    *((_DWORD *)a4 + 2) = v14 | 0x80;
    v16 = AMLIGetNamedChild(v15, 1145652063);
    if ( v16 )
    {
      v6 = ACPIGet(
             *a4,
             1145652063,
             738722055,
             0LL,
             0,
             (__int64)IsPciBusAsyncWorker,
             (__int64)a4,
             (__int64)(a4 + 3),
             0LL);
      AMLIDereferenceHandleEx((__int64)v16);
      if ( v6 == 259 )
        return 259LL;
      if ( v6 < 0 )
        goto LABEL_22;
    }
  }
  if ( !a4[3] )
    goto LABEL_12;
  ACPIConvertStringDelimitation();
  if ( strstr((const char *)a4[3], "PNP0A03") || strstr((const char *)a4[3], "PNP0A08") )
  {
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x41u);
    a4[3] = 0LL;
LABEL_64:
    v33 = (_BYTE *)a4[8];
LABEL_65:
    *v33 = 1;
    goto LABEL_24;
  }
  ExFreePoolWithTag((PVOID)a4[3], 0);
  a4[3] = 0LL;
LABEL_12:
  v17 = *((_DWORD *)a4 + 2);
  if ( (v17 & 8) == 0 )
  {
    *((_DWORD *)a4 + 2) = v17 | 8;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
    {
      v32 = ACPIGet(
              *a4,
              1380204895,
              -1543240702,
              0LL,
              0,
              (__int64)IsPciBusAsyncWorker,
              (__int64)a4,
              (__int64)(a4 + 4),
              0LL);
      v6 = v32;
      if ( v32 == 259 )
        return 259LL;
      if ( v32 < 0 )
        goto LABEL_22;
    }
    else
    {
      *((_DWORD *)a4 + 8) = *(_DWORD *)(v8 + 92);
    }
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
  {
    _InterlockedExchange((volatile __int32 *)(v8 + 92), *((_DWORD *)a4 + 8));
    _InterlockedOr((volatile signed __int32 *)(v8 + 88), 0x80u);
  }
  v18 = *((_DWORD *)a4 + 2);
  if ( (v18 & 0x20) != 0 )
    goto LABEL_82;
  v19 = *a4;
  *((_DWORD *)a4 + 2) = v18 | 0x20;
  v20 = AMLIGetParent(v19);
  v21 = v20;
  if ( !v20 )
  {
    v6 = -1073741661;
    goto LABEL_22;
  }
  v6 = IsPciBusAsync(v20, (__int64)IsPciBusAsyncWorker, (__int64)a4, (_BYTE *)a4 + 36);
  AMLIDereferenceHandleEx(v21);
  if ( v6 == 259 )
    return 259LL;
  if ( v6 >= 0 )
  {
LABEL_82:
    if ( !*((_BYTE *)a4 + 36) )
      goto LABEL_22;
    v27 = *((_DWORD *)a4 + 2);
    if ( (v27 & 0x40) != 0 )
    {
LABEL_38:
      if ( *((_WORD *)a4 + 36) != 0xFFFF && *((_WORD *)a4 + 37) != 0xFFFF )
      {
        v31 = *((unsigned __int8 *)a4 + 86);
        if ( (_BYTE)v31 != 0xFF
          && *((_BYTE *)a4 + 83) != 0xFF
          && *((_BYTE *)a4 + 82) != 0xFF
          && *((_BYTE *)a4 + 81) != 0xFF )
        {
          if ( (v31 & 0xFFFFFF7F) - 1 <= 1 )
          {
            _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
            *(_BYTE *)(v8 + 96) = *((_BYTE *)a4 + 86);
            *(_BYTE *)a4[8] = 1;
          }
          else
          {
            _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x100000000uLL);
            v5 = 1;
            *(_BYTE *)a4[8] = 0;
          }
          v34 = AMLIGetParent(*a4);
          if ( v34 )
          {
            v35 = *(_QWORD *)(*(_QWORD *)v34 + 104LL);
            AMLIDereferenceHandleEx(v34);
            if ( v35 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v35 + 184), 0, 0) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(v8 + 88), 2u);
                if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                  _InterlockedOr64((volatile signed __int64 *)(v8 + 1120), 0x8000uLL);
              }
              goto LABEL_24;
            }
          }
        }
      }
      goto LABEL_22;
    }
    v28 = *a4;
    v29 = v27 | 0x40;
    *((_DWORD *)a4 + 2) = v29;
    v30 = PciConfigInternal(v29, v28, a3, (_DWORD)a4, (__int64)IsPciBusAsyncWorker, (__int64)a4, (__int64)(a4 + 9));
    v6 = v30;
    if ( v30 != 259 )
    {
      if ( v30 < 0 )
        goto LABEL_22;
      goto LABEL_38;
    }
    return 259LL;
  }
LABEL_22:
  v22 = (_BYTE *)a4[8];
LABEL_23:
  *v22 = 0;
LABEL_24:
  v23 = 0;
  if ( v6 != -1073741772 )
    v23 = v6;
  if ( *((_DWORD *)a4 + 10) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[6])(*a4, v23, 0LL, a4[7]);
  v24 = (void *)a4[2];
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  v25 = (void *)a4[3];
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  AcpipFreePciBusState(a4);
  return v23;
}
