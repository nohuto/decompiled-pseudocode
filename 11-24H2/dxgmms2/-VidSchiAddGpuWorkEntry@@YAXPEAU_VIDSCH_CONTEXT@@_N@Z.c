/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x140034BB0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140046B44 (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     McTemplateK0pqIR1_EtwWriteTransfer @ 0x140034D30 (McTemplateK0pqIR1_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // rdi
  __int64 v6; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // r9
  __int64 Pool2; // rax
  void (__fastcall *v10)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  v2 = *((_DWORD *)a1 + 246);
  v3 = (_DWORD *)((char *)a1 + 984);
  if ( v2 >= 0x80 )
  {
    v6 = *((_QWORD *)a1 + 124);
    v3 = (_DWORD *)((char *)a1 + 984);
    if ( v6 )
    {
      if ( (byte_140081242 & 8) != 0 )
      {
        v8 = *((_QWORD *)a1 + 7);
        if ( !v8 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v8) = (_DWORD)a1;
        McTemplateK0pqIR1_EtwWriteTransfer(v6, a2, v2, v8, v2, v6);
      }
      *((_DWORD *)a1 + 246) = 0;
      v3 = (_DWORD *)((char *)a1 + 984);
    }
  }
  if ( *((_QWORD *)a1 + 124)
    || (Pool2 = ExAllocatePool2(64LL, 1024LL, 1633773910LL), (*((_QWORD *)a1 + 124) = Pool2) != 0LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( !a2 )
    {
      v3 = (_DWORD *)((char *)a1 + 984);
      PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
    }
    *(LARGE_INTEGER *)(*((_QWORD *)a1 + 124) + 8LL * *((unsigned int *)a1 + 246)) = PerformanceCounter;
    ++*v3;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    v10 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 462;
    v10(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate GpuWorkRecords for long haul logging",
      462LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
