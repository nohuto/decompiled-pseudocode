/*
 * XREFs of PiControlGetDeviceStack @ 0x140A5027C
 * Callers:
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140357A14 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14045B61C (IoGetLowerDeviceObjectWithTag.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, _WORD *a3, unsigned int *a4)
{
  __int64 v4; // rcx
  int v7; // ebx
  __int64 v8; // rsi
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *AttachedDeviceReferenceWithTag; // rax
  int v11; // r14d
  void *v12; // rdi
  PVOID **Pool2; // rax
  PVOID *v14; // rcx
  void *v15; // rcx
  unsigned int v16; // r14d
  PVOID *v17; // rdi
  __int64 v19; // rax
  unsigned int v20; // edx
  _WORD *v21; // r12
  PVOID *v22; // r13
  __int64 v23; // r15
  unsigned __int16 Length; // di
  _WORD *v25; // r12
  unsigned int v26; // r8d
  __m128i v27; // xmm1
  wchar_t *v28; // xmm0_8
  unsigned int v29; // [rsp+30h] [rbp-38h]
  PVOID Object; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  int v34; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+50h]
  _WORD *v36; // [rsp+C0h] [rbp+58h]
  unsigned int *v37; // [rsp+C8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  p_P = &P;
  v34 = 0;
  P = &P;
  v7 = 0;
  DestinationString = 0LL;
  v8 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v4, 0x43706E50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v7 = -1073741808;
    goto LABEL_16;
  }
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceAttachmentBaseRefWithTag, 0x43706E50u);
  v11 = 0;
  while ( 1 )
  {
    v12 = AttachedDeviceReferenceWithTag;
    if ( !AttachedDeviceReferenceWithTag )
      break;
    Pool2 = (PVOID **)ExAllocatePool2(0x100uLL, 0x18uLL, 0x47706E50u);
    if ( !Pool2 )
    {
      ObfDereferenceObjectWithTag(v12, 0x43706E50u);
      v7 = -1073741670;
      goto LABEL_16;
    }
    Pool2[2] = (PVOID *)v12;
    v14 = p_P;
    if ( *p_P != &P )
LABEL_6:
      __fastfail(3u);
    Pool2[1] = p_P;
    *Pool2 = &P;
    *v14 = Pool2;
    p_P = (PVOID *)Pool2;
    AttachedDeviceReferenceWithTag = IoGetLowerDeviceObjectWithTag((__int64)v12, 0x43706E50u);
  }
  v20 = a2;
  v21 = a3;
  v22 = (PVOID *)P;
  v29 = v20;
  while ( v22 != &P )
  {
    v23 = *((_QWORD *)v22[2] + 1);
    if ( !v23 )
    {
      RtlInitUnicodeString(&DestinationString, L"?");
LABEL_52:
      Length = DestinationString.Length;
      goto LABEL_34;
    }
    if ( *(_QWORD *)(v23 + 64) && *(_WORD *)(v23 + 56) >= 2u )
    {
      Length = _mm_cvtsi128_si32(*(__m128i *)(v23 + 56));
      for ( DestinationString = *(UNICODE_STRING *)(v23 + 56); Length >= 2u; DestinationString.Length = Length )
      {
        if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
          break;
        Length -= 2;
      }
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      Length = DestinationString.Length;
    }
    if ( !Length )
    {
      v26 = 272;
      v34 = 272;
      if ( !v8 )
      {
        v8 = ExAllocatePool2(0x100uLL, 0x110uLL, 0x47706E50u);
        if ( !v8 )
        {
          v7 = -1073741670;
          goto LABEL_16;
        }
        v26 = v34;
      }
      v7 = ObQueryNameStringMode((char *)v23, v8, v26, &v34, 0);
      if ( v7 >= 0 && v34 && *(_WORD *)v8 >= 2u )
      {
        v27 = *(__m128i *)v8;
        v28 = *(wchar_t **)(v8 + 8);
        *(_QWORD *)&DestinationString.Length = *(_QWORD *)v8;
        DestinationString.Buffer = v28;
        Length = _mm_cvtsi128_si32(v27);
        goto LABEL_34;
      }
      RtlInitUnicodeString(&DestinationString, L"?");
      v7 = 0;
      goto LABEL_52;
    }
LABEL_34:
    if ( v21 )
    {
      v20 = v29;
      if ( v29 >= (unsigned __int64)Length + 2 )
      {
        memmove(v21, DestinationString.Buffer, Length);
        v25 = &v21[(unsigned __int64)Length >> 1];
        *v25 = 0;
        v21 = v25 + 1;
        v20 = -2 - Length + v29;
        v29 = v20;
      }
    }
    else
    {
      v20 = v29;
    }
    v22 = (PVOID *)*v22;
    v11 += Length + 2;
  }
  v15 = (void *)v8;
  if ( v7 >= 0 )
  {
    if ( v21 && v20 >= 2 )
      *v21 = 0;
    v16 = v11 + 2;
    *v37 = v16;
    if ( !v36 || v16 > v35 )
    {
      v7 = -1073741789;
      v15 = (void *)v8;
    }
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
LABEL_16:
  while ( 1 )
  {
    v17 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_6;
    v19 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_6;
    P = *(PVOID *)P;
    *(_QWORD *)(v19 + 8) = &P;
    ObfDereferenceObjectWithTag(v17[2], 0x43706E50u);
    ExFreePoolWithTag(v17, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  return (unsigned int)v7;
}
