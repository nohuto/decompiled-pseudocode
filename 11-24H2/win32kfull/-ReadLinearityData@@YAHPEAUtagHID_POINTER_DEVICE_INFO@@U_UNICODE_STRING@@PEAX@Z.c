/*
 * XREFs of ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x140200374
 * Callers:
 *     RetrieveCalibrationData @ 0x140217DC0 (RetrieveCalibrationData.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011C530 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x140200790 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 */

__int64 __fastcall ReadLinearityData(struct tagHID_POINTER_DEVICE_INFO *a1, __m128i *a2, void *a3)
{
  PWSTR v3; // r12
  unsigned int v6; // edi
  WCHAR *v7; // rsi
  __int64 v8; // rax
  void **v9; // rbx
  __int64 v10; // r15
  const wchar_t *v11; // rcx
  wchar_t *v12; // rax
  char *v13; // r14
  wchar_t *v14; // rax
  unsigned __int64 v15; // rdi
  char *v16; // rax
  void *v17; // rcx
  int v18; // r14d
  struct _UNICODE_STRING v20; // [rsp+30h] [rbp-79h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v22; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING v23; // [rsp+80h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  struct _UNICODE_STRING v25; // [rsp+A0h] [rbp-9h] BYREF
  struct _UNICODE_STRING v26; // [rsp+B0h] [rbp+7h] BYREF
  struct _UNICODE_STRING v27; // [rsp+C0h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  v3 = (PWSTR)a2->m128i_i64[1];
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v8 = Win32AllocPoolZInit(88LL, 2020635477LL);
  v9 = (void **)v8;
  if ( !v8 )
    return v6;
  v10 = v8 + 8;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\LinearityData");
  RtlInitUnicodeString(&v26, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC");
  RtlInitUnicodeString(&v23, L"LinearityData");
  v20 = v23;
  v6 = ReadLinearityDataImp(a3, &v20, 1LL, v10, v9);
  if ( v6 )
    goto LABEL_25;
  if ( v3 )
  {
    v11 = (const wchar_t *)_mm_srli_si128(*a2, 8).m128i_u64[0];
    if ( v11 )
    {
      v12 = wcschr(v11, 0x23u);
      if ( v12 )
      {
        v13 = (char *)(v12 + 1);
        v14 = wcschr(v12 + 1, 0x23u);
        if ( v14 )
        {
          v15 = ((char *)v14 - v13) >> 1;
          v16 = (char *)Win32AllocPoolZInit(2 * v15 + 2, 2020635477LL);
          v7 = (WCHAR *)v16;
          if ( v16 )
          {
            RtlStringCchCopyNW(v16, v15 + 1, v13, v15);
            RtlInitUnicodeString(&v25, v7);
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v20 = v25;
              v6 = ReadLinearityDataImp(KeyHandle, &v20, 1LL, v10, v9);
              ZwClose(KeyHandle);
              if ( v6 )
              {
LABEL_21:
                Win32FreePool(v7);
                if ( !v6 )
                  goto LABEL_22;
LABEL_25:
                *((_QWORD *)a1 + 50) = v9;
                return v6;
              }
            }
          }
        }
      }
    }
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v26;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v17 = a3;
    v18 = 0;
    KeyHandle = a3;
  }
  else
  {
    v17 = KeyHandle;
    v18 = 1;
  }
  v20 = v23;
  v6 = ReadLinearityDataImp(v17, &v20, 1LL, v10, v9);
  if ( v18 )
    ZwClose(KeyHandle);
  if ( v6
    || (v22 = 0LL,
        RtlInitUnicodeString(&v22, L"UserLinearityData"),
        v20 = v22,
        (v6 = ReadLinearityDataImp(a3, &v20, 2LL, v10, v9)) != 0) )
  {
    if ( !v7 )
      goto LABEL_25;
    goto LABEL_21;
  }
  v22 = 0LL;
  if ( v7 )
  {
    RtlInitUnicodeString(&v22, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\UserLinearityData");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v20 = 0LL;
      RtlInitUnicodeString(&v20, v7);
      v27 = v20;
      v6 = ReadLinearityDataImp(KeyHandle, &v27, v6 + 2, v10, v9);
      ZwClose(KeyHandle);
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( *v9 )
  {
    Win32FreePool(*v9);
    *v9 = 0LL;
  }
  Win32FreePool(v9);
  return v6;
}
