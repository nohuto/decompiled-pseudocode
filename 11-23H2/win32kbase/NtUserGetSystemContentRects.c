/*
 * XREFs of NtUserGetSystemContentRects @ 0x1C0145B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C01300D0 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C0130190 (-GetCount@CContentRects@@SAIXZ.c)
 */

__int64 __fastcall NtUserGetSystemContentRects(unsigned int *a1, volatile void *a2)
{
  unsigned int *v3; // rdi
  int v4; // ebx
  int v5; // ecx
  unsigned int Count; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int *v9; // rax
  __int64 CurrentProcessWow64Process; // rax
  bool ContentRects; // r14
  unsigned int v12; // eax
  unsigned int v14[20]; // [rsp+40h] [rbp-B8h] BYREF
  struct tagRECT Src[4]; // [rsp+90h] [rbp-68h] BYREF

  v3 = a1;
  v4 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      memset(Src, 0, sizeof(Src));
      v14[0] = 0;
      v9 = v3;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v9 = (unsigned int *)MmUserProbeAddress;
      v14[0] = *v9;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v7, v8);
      ProbeForWrite(a2, 16LL * v14[0], CurrentProcessWow64Process != 0 ? 1 : 4);
      ContentRects = CContentRects::GetContentRects(v14[0], Src, v14);
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      v12 = v14[0];
      *v3 = v14[0];
      if ( !ContentRects )
      {
        v5 = 122;
        goto LABEL_3;
      }
      memmove((void *)a2, Src, 16LL * v12);
    }
    else
    {
      Count = CContentRects::GetCount();
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      *v3 = Count;
    }
    return 1;
  }
  v5 = 87;
LABEL_3:
  UserSetLastError(v5);
  return v4;
}
