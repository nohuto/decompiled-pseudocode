/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJPEAUIMessageLoopExtensions@@KPEBQEAXKPEAK@Z @ 0x1801BB620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        struct IMessageLoopExtensions *a2,
        unsigned int a3,
        void *const *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v7; // rbx
  __int64 v10; // rdi
  int v11; // ebp
  int v12; // eax
  unsigned int v13; // ebx
  _QWORD v15[64]; // [rsp+40h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v7 = a3;
  if ( a3 && !a4 || a3 > 0x3F )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v10 = *((_QWORD *)this + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8), 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
      if ( *((CChannel **)this + 10) == (CChannel *)((char *)this + 80) )
      {
        ResetEvent(*((HANDLE *)this + 12));
        memset_0(v15, 0, sizeof(v15));
        memcpy_0(v15, a4, 8 * v7);
        v15[v7] = *((_QWORD *)this + 12);
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
        v12 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, _QWORD, _QWORD *, _QWORD, _DWORD, unsigned int *))(*(_QWORD *)a2 + 32LL))(
                a2,
                (unsigned int)(v7 + 1),
                v15,
                a5,
                0,
                a6);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x276,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
            (const char *)(unsigned int)v12);
          return v13;
        }
      }
      else
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
        *a6 = v7;
      }
      return 0LL;
    }
  }
}
