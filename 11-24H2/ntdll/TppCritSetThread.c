/*
 * XREFs of TppCritSetThread @ 0x1800EEED0
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180162290 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x1801624B0 (NtAdjustPrivilegesToken.c)
 *     NtDuplicateToken @ 0x1801624D0 (NtDuplicateToken.c)
 *     NtSetInformationObject @ 0x180162800 (NtSetInformationObject.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

int __fastcall TppCritSetThread(HANDLE *a1)
{
  struct _TEB *v2; // rax
  int v4; // [rsp+20h] [rbp-A8h]
  __int64 v5; // [rsp+28h] [rbp-A0h]
  __int16 v6; // [rsp+30h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  int v8; // [rsp+40h] [rbp-88h] BYREF
  HANDLE v9[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v10; // [rsp+58h] [rbp-70h] BYREF
  __int64 v11; // [rsp+60h] [rbp-68h] BYREF
  __int128 v12; // [rsp+68h] [rbp-60h]
  __int64 v13; // [rsp+78h] [rbp-50h]
  __int128 v14; // [rsp+80h] [rbp-48h]
  __int64 v15; // [rsp+90h] [rbp-38h] BYREF
  int v16; // [rsp+98h] [rbp-30h]
  __int128 v17; // [rsp+A0h] [rbp-28h] BYREF

  v17 = 0LL;
  v8 = 0;
  v6 = 0;
  v11 = 48LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v9[0] = 0LL;
  v15 = 0LL;
  v16 = 0;
  Handle = 0LL;
  *a1 = 0LL;
  v2 = NtCurrentTeb();
  if ( (v2->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    LODWORD(v2) = NtOpenProcessTokenEx(-1LL, 2LL, 0LL, v9);
    if ( (int)v2 >= 0 )
    {
      v15 = 0x20000000CLL;
      LOWORD(v16) = 0;
      *((_QWORD *)&v14 + 1) = &v15;
      if ( (int)NtDuplicateToken(v9[0], 36LL, &v11) >= 0 )
      {
        v6 = 256;
        if ( (int)((__int64 (__fastcall *)(HANDLE, __int64, __int16 *, __int64, int, HANDLE *))NtSetInformationObject)(
                    Handle,
                    4LL,
                    &v6,
                    2LL,
                    2,
                    &Handle) >= 0 )
        {
          if ( (int)NtSetInformationThread(-2LL, 5LL, &Handle) >= 0 )
          {
            LODWORD(v17) = 1;
            v9[1] = (HANDLE)20;
            *(_QWORD *)((char *)&v17 + 4) = 20LL;
            HIDWORD(v17) = 2;
            v5 = 0LL;
            v4 = 0;
            if ( (int)NtAdjustPrivilegesToken(Handle, 0LL, &v17) >= 0 )
            {
              v8 = 1;
              if ( (int)NtSetInformationThread(-2LL, 18LL, &v8) >= 0 )
              {
                *a1 = Handle;
                Handle = 0LL;
              }
            }
            v10 = 0LL;
            NtSetInformationThread(-2LL, 5LL, &v10);
          }
          if ( Handle )
          {
            v6 = 0;
            ((void (__fastcall *)(HANDLE, __int64, __int16 *, __int64, int, __int64))NtSetInformationObject)(
              Handle,
              4LL,
              &v6,
              2LL,
              v4,
              v5);
          }
        }
        if ( Handle )
          NtClose(Handle);
      }
      LODWORD(v2) = NtClose(v9[0]);
    }
  }
  return (int)v2;
}
