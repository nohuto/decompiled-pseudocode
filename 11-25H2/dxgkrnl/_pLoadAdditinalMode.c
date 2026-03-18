/*
 * XREFs of _pLoadAdditinalMode @ 0x1402C8CEC
 * Callers:
 *     _pGetAdditionalTiming @ 0x1402C8A7C (_pGetAdditionalTiming.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004C414 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _pPopulateProgressiveTimingList @ 0x14026E48C (_pPopulateProgressiveTimingList.c)
 *     _pReadDetailTimingFromReg @ 0x14026E584 (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x1402C9248 (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(int a1)
{
  __int64 v1; // rdi
  ULONG v2; // r15d
  const WCHAR *v3; // rax
  NTSTATUS appended; // eax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  wchar_t *v15; // r13
  NTSTATUS v16; // eax
  __int64 result; // rax
  unsigned __int16 v18; // ax
  NTSTATUS v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  int v22; // edi
  int v23; // edi
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+38h] [rbp-39h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+68h] [rbp-9h] BYREF
  __int128 v31; // [rsp+78h] [rbp+7h]
  __int128 v32; // [rsp+88h] [rbp+17h]

  v1 = a1;
  WdLogSingleEntry1(7LL, a1);
  WdLogGlobalForLineNumber = 566;
  if ( (_DWORD)v1 == -2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 572;
  }
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_14015D6B0;
  v2 = 0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 584;
  }
  v3 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v1);
  if ( !v3 )
  {
    WdLogSingleEntry1(7LL, v1);
    result = 3221226021LL;
    WdLogGlobalForLineNumber = 594;
    return result;
  }
  appended = RtlAppendUnicodeToString(&Destination, v3);
  v5 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 603;
    }
    WdLogSingleEntry2(2LL, v1, v5);
    WdLogGlobalForLineNumber = 605;
    return (unsigned int)v5;
  }
  KeyHandle = 0LL;
  v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  LODWORD(v5) = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(7LL, v1, v6);
    WdLogGlobalForLineNumber = 620;
    return (unsigned int)v5;
  }
  v7 = KeyHandle;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    v7 = KeyHandle;
    WdLogGlobalForLineNumber = 625;
  }
  ResultLength = 0;
  KeyInformation = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v8 = ZwQueryKey(v7, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  LODWORD(v5) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v8);
    WdLogGlobalForLineNumber = 836;
    goto LABEL_23;
  }
  if ( !DWORD1(v31) )
  {
    WdLogSingleEntry1(7LL, v1);
    WdLogGlobalForLineNumber = 829;
    LODWORD(v5) = -1073741275;
LABEL_23:
    ZwClose(KeyHandle);
    return (unsigned int)v5;
  }
  v25 = 0;
  v11 = (unsigned int *)operator new[]((unsigned int)(28 * (DWORD1(v31) - 1) + 48), 0x4D677844u, 256LL, v9);
  if ( v11 )
  {
    v15 = (wchar_t *)operator new[](0x96uLL, 0x4D677844u, 256LL, v10);
    if ( v15 )
    {
      while ( v2 < DWORD1(v31) )
      {
        v16 = ZwEnumerateKey(KeyHandle, v2, KeyBasicInformation, v15, 0x96u, &ResultLength);
        LODWORD(v5) = v16;
        switch ( v16 )
        {
          case -2147483643:
            goto LABEL_16;
          case -2147483622:
            WdLogSingleEntry1(3LL, v1);
            WdLogGlobalForLineNumber = 705;
            goto LABEL_20;
          case -1073741789:
LABEL_16:
            WdLogSingleEntry2(3LL, v1, v2);
            WdLogGlobalForLineNumber = 695;
            break;
          default:
            if ( v16 < 0 )
            {
              WdLogSingleEntry3(3LL, v1, v2, v16);
              WdLogGlobalForLineNumber = 717;
            }
            else
            {
              v18 = v15[6];
              Handle = 0LL;
              Destination.MaximumLength = v18;
              Destination.Length = v18;
              Destination.Buffer = v15 + 8;
              v19 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination);
              LODWORD(v5) = v19;
              if ( v19 >= 0 )
              {
                LODWORD(v5) = pReadDetailTimingFromReg(Handle, v1, v2, &v11[7 * v25 + 5]);
                ZwClose(Handle);
                v20 = v25 + 1;
                if ( (int)v5 < 0 )
                  v20 = v25;
                v25 = v20;
              }
              else
              {
                WdLogSingleEntry3(3LL, v1, v2, v19);
                WdLogGlobalForLineNumber = 759;
              }
            }
            break;
        }
        ++v2;
      }
LABEL_20:
      if ( v25 )
      {
        *(_QWORD *)v11 = qword_14015E4C0;
        v11[2] = v1;
        v11[4] = v25;
        *((_BYTE *)v11 + 12) = 0;
        qword_14015E4C0 = v11;
        if ( (_DWORD)v1 )
        {
          v21 = v1 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                if ( v23 != 11 )
                {
                  v24 = (_QWORD *)pPopulateProgressiveTimingList(v11, v12, v13, v14);
                  if ( v24 )
                  {
                    *v24 = qword_14015E4C0;
                    qword_14015E4C0 = v24;
                  }
                }
              }
            }
          }
        }
        LODWORD(v5) = 0;
      }
      else
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 673;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
      LODWORD(v5) = -1073741801;
    }
    goto LABEL_23;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 654;
  ZwClose(KeyHandle);
  return 3221225495LL;
}
