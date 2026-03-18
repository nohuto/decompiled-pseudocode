/*
 * XREFs of ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1402485F0
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428970 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140036FB0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x14004C190 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DpiIndirectStartAdapter(struct _UNICODE_STRING *a1, const void *a2, unsigned int a3, __int64 a4)
{
  size_t v5; // rsi
  char *StartContext; // rbx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  NTSTATUS v11; // eax
  void *v13; // [rsp+40h] [rbp-18h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-10h] BYREF
  char *v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v5 = a3;
  StartContext = (char *)ExAllocatePool2(256LL, 1552LL, 1953656900LL, a4);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v15);
  v13 = 0LL;
  v15 = StartContext;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v13);
  if ( StartContext )
  {
    v9 = RtlStringCchCopyW(StartContext + 4, 260LL, (char *)a1->Buffer);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( (unsigned int)v5 <= 0x400 )
      {
        memmove(StartContext + 528, a2, v5);
        *((_DWORD *)StartContext + 131) = v5;
        *(_DWORD *)StartContext = 4;
        ThreadHandle = 0LL;
        v11 = PsCreateSystemThread(
                &ThreadHandle,
                0x1FFFFFu,
                0LL,
                0LL,
                0LL,
                (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
                StartContext);
        v8 = v11;
        if ( v11 >= 0 )
        {
          v15 = 0LL;
        }
        else
        {
          WdLogSingleEntry1(2LL, v11);
          WdLogGlobalForLineNumber = 307;
        }
      }
      else
      {
        v8 = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 285;
      v8 = v10;
    }
  }
  else
  {
    v8 = -1073741801;
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 274;
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v15);
  return v8;
}
