/*
 * XREFs of SLQueryLicenseValueInternal @ 0x1407B9E3C
 * Callers:
 *     NtQueryLicenseValue @ 0x1409604B0 (NtQueryLicenseValue.c)
 *     ntoskrnl_27 @ 0x1409607E0 (ntoskrnl_27.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404AA410 (ExpQueryLicenseValueFromBlobHelper.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     sub_1407B91F4 @ 0x1407B91F4 (sub_1407B91F4.c)
 *     SLGetSubscriptionPfn @ 0x1407B9B58 (SLGetSubscriptionPfn.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLQueryLicenseValueInternal(
        __int64 a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  const UNICODE_STRING *v6; // r15
  wchar_t *v7; // r13
  int v8; // edx
  unsigned int i; // r12d
  unsigned int v10; // eax
  size_t v11; // r8
  unsigned int v12; // eax
  _WORD *v13; // r10
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v18; // rdi
  bool v19; // zf
  __int64 v20; // r13
  int LicenseValueFromBlobHelper; // edi
  wchar_t *Pool2; // rax
  char v24; // r13
  unsigned int j; // r15d
  __int64 v26; // r15
  int v27; // eax
  char v28; // al
  struct _KTHREAD *v29; // rax
  char *v30; // rax
  char *v31; // r15
  __int64 v32; // r12
  int v33; // r15d
  unsigned int k; // ebx
  unsigned int v35; // eax
  size_t v36; // rdx
  unsigned int v37; // eax
  _WORD *v38; // r8
  __int64 v39; // r9
  __int64 v40; // r10
  const wchar_t *v41; // [rsp+78h] [rbp-190h]
  int v43; // [rsp+88h] [rbp-180h]
  int v44; // [rsp+8Ch] [rbp-17Ch] BYREF
  __int64 v45; // [rsp+90h] [rbp-178h]
  __int64 v46; // [rsp+98h] [rbp-170h]
  int v47; // [rsp+A0h] [rbp-168h]
  int v48; // [rsp+A4h] [rbp-164h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-160h]
  PVOID P; // [rsp+B0h] [rbp-158h] BYREF
  const UNICODE_STRING *v51; // [rsp+C0h] [rbp-148h]
  __int64 v52; // [rsp+C8h] [rbp-140h]
  __int128 v53; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-120h]
  const UNICODE_STRING *v55; // [rsp+F0h] [rbp-118h]
  __int64 v56; // [rsp+F8h] [rbp-110h]
  const void **p_Buffer; // [rsp+108h] [rbp-100h]
  wchar_t *Str2[8]; // [rsp+110h] [rbp-F8h]
  _BYTE Buf1[112]; // [rsp+150h] [rbp-B8h] BYREF

  v45 = a4;
  v46 = a3;
  v6 = a2;
  v51 = a2;
  v54 = a1;
  v55 = a2;
  v56 = a3;
  v52 = a4;
  v53 = 0LL;
  v7 = 0LL;
  v41 = 0LL;
  P = 0LL;
  v44 = 0;
  v48 = 0;
  if ( a2 )
  {
    if ( a6 )
    {
      p_Buffer = (const void **)&a2->Buffer;
      if ( a2->Buffer )
      {
        if ( a2->Length >= 2u )
        {
          LOBYTE(v53) = 1;
          *((_QWORD *)&v53 + 1) = a2;
          v47 = sub_1407B91F4(a1);
          v49 = 0LL;
          v8 = 1;
          v43 = 1;
          for ( i = 0; i < 0xE; ++i )
          {
            v10 = (unsigned __int16)**((_WORD **)&v53 + 1);
            v11 = *((unsigned __int16 *)&off_140B3CA80 + 20 * i + 4);
            if ( (_WORD)v10 == (_WORD)v11 )
            {
              v12 = v10 >> 1;
              if ( v12 )
              {
                v13 = Buf1;
                v14 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8LL) - (_QWORD)Buf1;
                v15 = v12;
                do
                {
                  *v13 = *(_WORD *)((char *)v13 + v14) ^ ((v8 + 1) | ((_WORD)v8 << 8) | 0x5555);
                  v8 += 2;
                  ++v13;
                  --v15;
                }
                while ( v15 );
                v43 = v8;
                v6 = v51;
              }
              if ( !memcmp(Buf1, *(&off_140B3CA80 + 5 * i), v11) )
              {
                v16 = (__int64)*(&off_140B3CA80 + 5 * i + 2);
                v49 = v16;
                LOBYTE(v7) = *((_BYTE *)&off_140B3CA80 + 40 * i + 32);
                goto LABEL_18;
              }
              v8 = v43;
            }
            else
            {
              v8 += v11;
              v43 = v8;
            }
          }
          v16 = 0LL;
LABEL_18:
          if ( v16 )
          {
            if ( (_BYTE)v7 )
            {
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v18 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
                ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v18, a1 + 46840);
              if ( v18 )
                v18[10] = 1;
            }
            guard_dispatch_icall_no_overrides(a1, v46);
            v19 = (_BYTE)v7 == 0;
            v20 = a1;
            if ( !v19 )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
              KeAbPostRelease(a1 + 46840);
              KeLeaveCriticalRegion();
            }
          }
          else
          {
            v20 = a1;
          }
          LicenseValueFromBlobHelper = v47;
          if ( v47 < 0 )
            goto LABEL_30;
          LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(
                                         v20,
                                         (__int64)&qword_140B3D4F0,
                                         0LL,
                                         (__int64)&v44,
                                         4,
                                         (__int64)&v48);
          if ( !qword_140FD8398 || !v44 || RtlEqualUnicodeString(v6, &String2, 0) )
            goto LABEL_52;
          Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v6->Length + 2, 0x20534C53u);
          v7 = Pool2;
          v41 = Pool2;
          if ( !Pool2 )
          {
            LicenseValueFromBlobHelper = -1073741801;
            goto LABEL_31;
          }
          memmove(Pool2, *p_Buffer, v6->Length);
          v24 = 0;
          Str2[0] = L"Security-SPP-GenuineLocalStatus";
          Str2[1] = L"Security-SPP-Action-StateData";
          Str2[2] = L"Security-SPP-LastWindowsActivationHResult";
          Str2[3] = L"Security-SPP-LastWindowsActivationTime";
          Str2[4] = L"Kernel-ExpirationDate";
          Str2[5] = L"SMR-HostManaged-Enabled";
          Str2[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
          for ( j = 0; j < 7; ++j )
          {
            if ( !wcsicmp(v41, Str2[j]) )
            {
              v24 = 1;
              break;
            }
          }
          v19 = v24 == 0;
          v20 = a1;
          if ( v19 )
          {
            SLGetSubscriptionPfn(a1, &P);
            v26 = a6;
            v27 = guard_dispatch_icall_no_overrides(P, 0LL);
            if ( (int)(v27 + 0x80000000) < 0 || v27 == -1073741789 )
            {
              LicenseValueFromBlobHelper = v27;
              if ( !a5 )
                LicenseValueFromBlobHelper = -1073741789;
              v28 = 0;
LABEL_54:
              if ( v28 )
              {
                LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(v20, (__int64)&v53, v46, v45, a5, v26);
                if ( LicenseValueFromBlobHelper == -1073741762 )
                {
                  v29 = KeGetCurrentThread();
                  --v29->KernelApcDisable;
                  v30 = (char *)KeAbPreAcquire(v20 + 46840, 0LL);
                  v31 = v30;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 46840), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 46840), v30, v20 + 46840);
                  if ( v31 )
                    v31[10] = 1;
                  *(_BYTE *)(v20 + 46992) = 1;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 46840));
                  KeAbPostRelease(v20 + 46840);
                  KeLeaveCriticalRegion();
                }
              }
              v32 = 0LL;
              v33 = 1;
              for ( k = 0; k < 0xE; ++k )
              {
                v35 = (unsigned __int16)**((_WORD **)&v53 + 1);
                v36 = *((unsigned __int16 *)&off_140B3CA80 + 20 * k + 4);
                if ( (_WORD)v35 == (_WORD)v36 )
                {
                  v37 = v35 >> 1;
                  if ( v37 )
                  {
                    v38 = Buf1;
                    v39 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8LL) - (_QWORD)Buf1;
                    v40 = v37;
                    do
                    {
                      *v38 = *(_WORD *)((char *)v38 + v39) ^ ((v33 + 1) | ((_WORD)v33 << 8) | 0x5555);
                      v33 += 2;
                      ++v38;
                      --v40;
                    }
                    while ( v40 );
                    v32 = 0LL;
                  }
                  if ( !memcmp(Buf1, *(&off_140B3CA80 + 5 * k), v36) )
                  {
                    v32 = (__int64)*(&off_140B3CA80 + 5 * k + 3);
                    break;
                  }
                }
                else
                {
                  v33 += v36;
                }
              }
              if ( v32
                && (LicenseValueFromBlobHelper >= 0
                 || LicenseValueFromBlobHelper == -1073741772
                 || LicenseValueFromBlobHelper == -1073741275) )
              {
                guard_dispatch_icall_no_overrides(a1, v46);
              }
LABEL_30:
              v7 = (wchar_t *)v41;
              goto LABEL_31;
            }
          }
          else
          {
LABEL_52:
            v26 = a6;
          }
          v28 = 1;
          goto LABEL_54;
        }
      }
    }
  }
  LicenseValueFromBlobHelper = -1073741811;
LABEL_31:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)LicenseValueFromBlobHelper;
}
