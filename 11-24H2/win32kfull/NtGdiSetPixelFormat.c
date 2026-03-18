/*
 * XREFs of NtGdiSetPixelFormat @ 0x14033CA10
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     UserGetHwnd @ 0x140285ACC (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140331CAC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x14033C920 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(HDC a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  ULONG v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r9
  __int64 DeviceHdev; // rdx
  unsigned int (__fastcall *v17)(__int64, _QWORD, __int64); // rax
  __int64 v18; // rdx
  int v19; // ecx
  Gre::Base *v20; // rcx
  ULONG v21; // ecx
  struct _RECTL v22; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v23[14]; // [rsp+30h] [rbp-D0h] BYREF
  HDC v24[22]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+170h] [rbp+70h] BYREF
  __int64 v26; // [rsp+178h] [rbp+78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v23, a1);
  v4 = 0;
  if ( !v23[0] || !*(_QWORD *)(v23[0] + 496LL) )
  {
    v21 = 6;
    goto LABEL_31;
  }
  v5 = XDCOBJ::ipfdDevMax((XDCOBJ *)v23);
  if ( a2 < 1 || a2 > v5 )
  {
    v21 = 87;
LABEL_31:
    EngSetLastError(v21);
    goto LABEL_32;
  }
  UserEnterUserCritSec(v7, v6, v8);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v24, (struct XDCOBJ *)v23, 0) )
  {
    v9 = 87;
LABEL_7:
    EngSetLastError(v9);
    DEVLOCKOBJ::~DEVLOCKOBJ(v24);
    UserLeaveUserCritSec();
LABEL_32:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
    return 0LL;
  }
  v10 = v23[0];
  v11 = 0LL;
  v26 = 0LL;
  if ( (*(_DWORD *)(v23[0] + 36LL) & 1) != 0 )
  {
    v25 = 0LL;
    if ( !(unsigned int)UserGetHwnd(a1, &v26, &v25) )
    {
      v9 = 2002;
      goto LABEL_7;
    }
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 188) == a2 )
        v4 = 1;
      else
        EngSetLastError(0x7D0u);
LABEL_14:
      DEVLOCKOBJ::~DEVLOCKOBJ(v24);
      UserLeaveUserCritSec();
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
      return v4;
    }
    v10 = v23[0];
    v11 = v26;
  }
  v13 = *(_QWORD *)(v10 + 48);
  v14 = (*(_QWORD *)(v10 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v10 + 496) != 0LL);
  v15 = v14;
  if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
  {
    v22 = *(struct _RECTL *)(v10 + 1032);
    DeviceHdev = hdevFindDeviceHdev((_QWORD *)v13, &v22, 0LL);
    v15 = v14;
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(v23[0] + 496LL) == *(_QWORD *)(v13 + 2544) )
        v15 = (*(_QWORD *)(DeviceHdev + 2544) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2544) != 0LL);
      v13 = DeviceHdev;
    }
  }
  if ( !*(_QWORD *)(v13 + 3128) )
    goto LABEL_14;
  if ( (*(_DWORD *)(v15 + 88) & 0x200000) == 0 )
    goto LABEL_14;
  v17 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v13 + 3112);
  if ( !v17 || !v17(v15, (unsigned int)a2, v11) )
    goto LABEL_14;
  v20 = *(Gre::Base **)(W32GetSessionState(v19, v18) + 96);
  if ( *((_DWORD *)v20 + 1204) )
  {
    *((_DWORD *)v20 + 1204) = 0;
    vForceClientRgnUpdate(v20);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ(v24);
  UserLeaveUserCritSec();
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
  return 1LL;
}
