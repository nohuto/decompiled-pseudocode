/*
 * XREFs of ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1801B6BF0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CKeyframeAnimation::SetProgress(CKeyframeAnimation *this, float a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  struct _RTL_GENERIC_TABLE *v5; // rcx
  char *v6; // rdi
  char *v7; // rax
  void *v8; // rsi
  char *v9; // rdx
  HANDLE ProcessHeap; // rax
  __int64 i; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  void *v15; // rcx
  signed int LastError; // eax
  __int64 v17; // rax
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp-58h] BYREF
  int Buffer; // [rsp+48h] [rbp-50h] BYREF
  LPVOID lpMem[2]; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  if ( *((float *)this + 121) != a2 )
  {
    v3 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 536) |= 4u;
    *((float *)this + 121) = fminf(1.0, fmaxf(a2, 0.0));
    v4 = *(_QWORD *)(v3 + 888);
    if ( v4 == *(_QWORD *)(v3 + 896) )
    {
      v17 = v4 + 1;
      v4 = 1LL;
      if ( v17 )
        v4 = v17;
    }
    v5 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v6 = 0LL;
    if ( v5 )
    {
      *(_OWORD *)lpMem = 0LL;
      v21 = 0LL;
      v22 = 0;
      Buffer = 32;
      v7 = (char *)RtlLookupElementGenericTable(v5, &Buffer);
      v8 = lpMem[0];
      v6 = v7;
      if ( lpMem[0] != lpMem[1] )
      {
        if ( lpMem[0] )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v8);
        }
        lpMem[0] = 0LL;
      }
    }
    v9 = v6 + 8;
    if ( !v6 )
      v9 = 0LL;
    if ( v9 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v9 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8 * v12) + 232LL) = v4 )
      {
        v12 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      v13 = *((_QWORD *)this + 3);
      (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v13 + 312) + 24LL))(*(_QWORD *)(v13 + 312), v9, i);
      if ( *(_DWORD *)(v13 + 248) )
      {
        v15 = *(void **)(v13 + 240);
        *(_DWORD *)(v13 + 248) = 0;
        DueTime.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v15, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          ModuleFailFastForHRESULT(LastError, retaddr);
        }
      }
      _m_prefetchw((const void *)(v13 + 252));
      if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v13 + 252), 8u) & 8) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        DueTime.LowPart = 8;
        lpMem[1] = &DueTime;
        v21 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULED_COMPOSITION_REASON,
          v14,
          2u,
          (PEVENT_DATA_DESCRIPTOR)&Buffer);
      }
    }
  }
}
