/*
 * XREFs of ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1400243BC
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A7C (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(DXGDIAGNOSTICS *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdi
  const void **v11; // rsi
  unsigned int v12; // eax
  __int64 *v13; // r14
  unsigned __int64 v14; // rcx
  const void *v15; // rdx

  v4 = *((_DWORD *)this + 5);
  if ( v4 == 1 )
    return 128LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 2 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v4 >> 1;
  v9 = operator new[](v8, 0x4B677844u, v7, a4);
  v10 = v9;
  if ( v9 )
  {
    v11 = (const void **)((char *)this + 56);
    memmove(
      (void *)(v9 + *((unsigned int *)this + 8)),
      (const void *)(*((unsigned int *)this + 8) + *((_QWORD *)this + 7)),
      (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 8)));
    v12 = *((_DWORD *)this + 9);
    if ( v12 >= *((_DWORD *)this + 8) )
    {
      v13 = (__int64 *)((char *)this + 56);
    }
    else
    {
      memmove((void *)(v10 + *((unsigned int *)this + 4)), *v11, v12);
      v13 = (__int64 *)((char *)this + 56);
      *((_DWORD *)this + 9) += *((_DWORD *)this + 4);
    }
    v14 = *((_QWORD *)this + 1);
    if ( v14 )
    {
      v15 = *v11;
      if ( v14 < (unsigned __int64)*v11 + *((unsigned int *)this + 8) )
        *((_QWORD *)this + 1) = v10 + v14 + *((unsigned int *)this + 4) - (_QWORD)v15;
      else
        *((_QWORD *)this + 1) = v10 + v14 - (_QWORD)v15;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 7));
    result = 0LL;
    *v13 = v10;
    *((_DWORD *)this + 4) = v8;
  }
  else
  {
    WdLogSingleEntry1(6LL, v8);
    WdLogGlobalForLineNumber = 1719;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Unable to allocate diagnosability buffer for new size 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225626LL;
  }
  return result;
}
