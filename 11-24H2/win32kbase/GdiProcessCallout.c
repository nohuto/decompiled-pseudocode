/*
 * XREFs of GdiProcessCallout @ 0x140179DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14005907C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140059274 (GreIsCurrentProcessSystemCritical.c)
 *     ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x1400875A0 (-GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z.c)
 *     ?OPMProcessTerminating@@YAXPEAX@Z @ 0x14008BF08 (-OPMProcessTerminating@@YAXPEAX@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1400B79C0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1400BF870 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1400BF8E8 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     IsUmfdUninitializeProcessSupported @ 0x14019F8D0 (IsUmfdUninitializeProcessSupported.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x1401C4964 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 *     UmfdUninitializeProcess @ 0x14023ACC0 (UmfdUninitializeProcess.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessPeb; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 SessionState; // rax
  NTSTATUS v14; // edi
  HANDLE v15; // rax
  int v16; // r15d
  HANDLE ProcessId; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 (*v20)(void); // rax
  int v21; // eax
  HANDLE v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  void (__fastcall *v25)(HANDLE); // rax
  BOOLEAN i; // dl
  PVOID v27; // rax
  char *v28; // rdi
  char *v29; // rcx
  char *v30; // rdi
  char *v31; // rcx
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
  {
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported(v5, v4) >= 0
      && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock(v7, v6) )
    {
      if ( a2 )
      {
        if ( !a1 && (int)IsUmfdUninitializeProcessSupported() >= 0 )
        {
          UmfdUninitializeProcess();
          return 3221225495LL;
        }
      }
      else if ( (int)IsUmfdUninitializeProcessSupported() >= 0 )
      {
        UmfdUninitializeProcess();
      }
    }
    return 0LL;
  }
  else
  {
    if ( !a1 )
      return 3221225495LL;
    if ( a2 )
    {
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(a1 + 88),
        (PRTL_AVL_COMPARE_ROUTINE)GDIEngUserMemAllocNodeCompare,
        (PRTL_AVL_ALLOCATE_ROUTINE)GDIEngUserMemAllocNodeAlloc,
        (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
        0LL);
      *(_QWORD *)(a1 + 200) = a1 + 192;
      *(_QWORD *)(a1 + 192) = a1 + 192;
      *(_QWORD *)(a1 + 216) = a1 + 208;
      *(_QWORD *)(a1 + 208) = a1 + 208;
      ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
      v10 = ProcessPeb;
      if ( ProcessPeb
        && (*(_DWORD *)(ProcessPeb + 264) = *(_DWORD *)(a1 + 280),
            memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
            ViewSize[1] = a1 + 248,
            LOBYTE(v11) = a2,
            (int)DxDdProcessCallout(a1 + 248, v11) >= 0) )
      {
        BaseAddress = 0LL;
        ViewSize[0] = 0LL;
        SectionHandle = 0LL;
        SessionState = W32GetSessionState(v12);
        if ( ObOpenObjectByPointer(
               *(PVOID *)(*(_QWORD *)(SessionState + 88) + 2184LL),
               0x200u,
               0LL,
               0xF001Fu,
               0LL,
               0,
               &SectionHandle) < 0 )
        {
          v14 = -1073741502;
        }
        else
        {
          v14 = ZwMapViewOfSection(
                  SectionHandle,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  0LL,
                  0LL,
                  ViewSize,
                  ViewUnmap,
                  0,
                  2u);
          if ( v14 >= 0
            && (!(unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline()
              ? (v15 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u))
              : (v15 = GrepSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u)),
                (*(_QWORD *)(a1 + 240) = v15) != 0LL) )
          {
            *(_QWORD *)(v10 + 248) = BaseAddress;
          }
          else
          {
            v14 = -1073741502;
          }
          ZwClose(SectionHandle);
        }
        if ( v14 < 0 )
          DxDdProcessCallout(a1 + 248, 0LL);
        return (unsigned int)v14;
      }
      else
      {
        return 3221225794LL;
      }
    }
    else
    {
      GdiUnmapGDIW32PIDLockedBitmaps(a1);
      v16 = GrepCloseCurrentProcess();
      ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
      OPMProcessTerminating(ProcessId);
      v20 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 24) + 2424LL);
      if ( v20 )
        v21 = v20();
      else
        v21 = -1073741637;
      if ( v21 >= 0 )
      {
        v22 = PsGetProcessId(*(PEPROCESS *)a1);
        v25 = *(void (__fastcall **)(HANDLE))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 24) + 2432LL);
        if ( v25 )
          v25(v22);
      }
      DxDdProcessCallout(a1 + 248, 0LL);
      for ( i = 1; ; i = 0 )
      {
        v27 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
        if ( !v27 )
          break;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v27);
      }
      v28 = *(char **)(a1 + 192);
      if ( v28 )
      {
        while ( v28 != (char *)(a1 + 192) )
        {
          v29 = v28;
          v28 = *(char **)v28;
          GreDeleteFastMutex(v29);
        }
      }
      v30 = *(char **)(a1 + 208);
      if ( v30 )
      {
        while ( v30 != (char *)(a1 + 208) )
        {
          v31 = v30;
          v30 = *(char **)v30;
          GreDeleteFastMutex(v31);
        }
      }
      if ( *(_QWORD *)(a1 + 240) )
      {
        Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline();
        MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 240));
        *(_QWORD *)(a1 + 240) = 0LL;
      }
      return v16 == 0 ? 0xC0000121 : 0;
    }
  }
}
