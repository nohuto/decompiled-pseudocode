/*
 * XREFs of ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18017872C
 * Callers:
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1801786A0 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?SetW@TraceLoggingCorrelationVector@@SAPEAV1@PEBG_N@Z @ 0x18033407C (-SetW@TraceLoggingCorrelationVector@@SAPEAV1@PEBG_N@Z.c)
 *     ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805FB5C0 (-RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA-AUIInspectable@Foundation@Windows@winrt@@PEAUH.c)
 * Callees:
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x180178B5C (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802BE51C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x18032CC18 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Set(const char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  void *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  struct TraceLoggingCorrelationVector *result; // rax
  unsigned __int64 v13; // rax
  char *v14; // rax
  char *v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  void *v20; // rax
  __int64 v21; // rax
  void *v22; // rax
  __int64 v23; // rsi

  LOBYTE(a2) = a2 ^ 1;
  v3 = TraceLoggingCorrelationVector::ValidateImpl(Str, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Str[v5] );
  if ( v5 )
  {
    v6 = 64LL;
    if ( (_BYTE)v4 != 1 )
      v6 = 128LL;
    if ( v5 <= v6 && Str[v5 - 1] == 33 )
    {
      if ( v4 == 1 )
      {
        v9 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v9 )
        {
          v8 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v9);
          goto LABEL_15;
        }
      }
      else
      {
        if ( v4 != 2 )
          return 0LL;
        v7 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v7 )
        {
          v8 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v7);
LABEL_15:
          v10 = v8;
          goto LABEL_17;
        }
      }
      v10 = 0LL;
LABEL_17:
      if ( v10 )
      {
        _o_strncpy_s(v10, 129LL, Str, v5 - 1);
        *(_BYTE *)(v10 + 129) = v5 - 1;
        *(_QWORD *)(v10 + 136) = (v5 + 1) << 32;
        v11 = *(_QWORD *)(v10 + 136) | 0x8000000000000000uLL;
LABEL_19:
        *(_QWORD *)(v10 + 136) = v11;
        result = (struct TraceLoggingCorrelationVector *)v10;
        *(_BYTE *)(*(unsigned __int8 *)(v10 + 129) + v10) = 0;
        return result;
      }
      return 0LL;
    }
  }
  v13 = 63LL;
  if ( (_BYTE)v4 != 1 )
    v13 = 127LL;
  if ( v5 > v13 )
    return 0LL;
  v14 = strrchr(Str, 46);
  if ( !v14 )
    return 0LL;
  v15 = v14 + 1;
  _o__set_errno(0LL);
  v16 = strtol(v15, 0LL, 10);
  v19 = v16;
  if ( !v16 && *v15 != 48 && v15[1] )
    return 0LL;
  if ( *(_DWORD *)_o__errno(v18, v17) == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v22 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v22 )
    {
      v21 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v22);
      goto LABEL_34;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v20 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v20 )
    {
      v21 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v20);
LABEL_34:
      v10 = v21;
      goto LABEL_36;
    }
  }
  v10 = 0LL;
LABEL_36:
  if ( v10 )
  {
    v23 = v15 - Str;
    _o_strncpy_s(v10, 129LL, Str, v23);
    *(_BYTE *)(v10 + 129) = v23;
    *(_QWORD *)(v10 + 136) = v19 | ((v5 + 1) << 32);
    v11 = *(_QWORD *)(v10 + 136) & 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_19;
  }
  return 0LL;
}
