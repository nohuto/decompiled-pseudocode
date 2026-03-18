/*
 * XREFs of ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x140024B6C
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140024230 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(DXGDIAGNOSTICS *this)
{
  unsigned int v1; // eax
  __int64 result; // rax
  __int64 v4; // r8
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdi
  const void **v8; // rsi
  unsigned int v9; // eax
  __int64 *v10; // r14
  unsigned __int64 v11; // rcx
  const void *v12; // rdx

  v1 = *((_DWORD *)this + 5);
  if ( v1 == 1 )
    return 128LL;
  v4 = *((_QWORD *)this + 6);
  v5 = 2 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v1 >> 1;
  v6 = operator new[](v5, 0x4B677844u, v4);
  v7 = v6;
  if ( v6 )
  {
    v8 = (const void **)((char *)this + 56);
    memmove(
      (void *)(v6 + *((unsigned int *)this + 8)),
      (const void *)(*((unsigned int *)this + 8) + *((_QWORD *)this + 7)),
      (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 8)));
    v9 = *((_DWORD *)this + 9);
    if ( v9 >= *((_DWORD *)this + 8) )
    {
      v10 = (__int64 *)((char *)this + 56);
    }
    else
    {
      memmove((void *)(v7 + *((unsigned int *)this + 4)), *v8, v9);
      v10 = (__int64 *)((char *)this + 56);
      *((_DWORD *)this + 9) += *((_DWORD *)this + 4);
    }
    v11 = *((_QWORD *)this + 1);
    if ( v11 )
    {
      v12 = *v8;
      if ( v11 < (unsigned __int64)*v8 + *((unsigned int *)this + 8) )
        *((_QWORD *)this + 1) = v7 + v11 + *((unsigned int *)this + 4) - (_QWORD)v12;
      else
        *((_QWORD *)this + 1) = v7 + v11 - (_QWORD)v12;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 7));
    result = 0LL;
    *v10 = v7;
    *((_DWORD *)this + 4) = v5;
  }
  else
  {
    WdLogSingleEntry1(6LL, v5);
    WdLogGlobalForLineNumber = 1719;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Unable to allocate diagnosability buffer for new size 0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225626LL;
  }
  return result;
}
