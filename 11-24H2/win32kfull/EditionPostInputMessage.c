/*
 * XREFs of EditionPostInputMessage @ 0x140237920
 * Callers:
 *     <none>
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x14012E3D4 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        _QWORD *a11)
{
  void *v11; // rdi
  _QWORD *v12; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  struct tagINPUT_MESSAGE_SOURCE *v18; // rbx
  __int64 v20; // [rsp+88h] [rbp-9h] BYREF
  struct tagQ *v21; // [rsp+90h] [rbp-1h] BYREF
  int v22; // [rsp+C8h] [rbp+37h] BYREF
  struct tagWND *v23; // [rsp+D0h] [rbp+3Fh] BYREF

  v23 = a2;
  v11 = 0LL;
  v12 = a11;
  v16 = *a11;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL) + 19LL) < 0 )
    return 0LL;
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a3 - 581 > 0x12 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( a3 - 512 > 0xE )
  {
    if ( a3 - 581 > 0x12 )
      goto LABEL_13;
LABEL_10:
    v23 = *(struct tagWND **)(a1 + 80);
LABEL_11:
    if ( !v16 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v16 && *(_DWORD *)v16 == 2 )
LABEL_12:
    v11 = *(void **)(v16 + 8);
LABEL_13:
  v17 = *(_QWORD *)(a1 + 80);
  v18 = a10;
  v22 = 0;
  LODWORD(a11) = 0;
  v20 = *(_QWORD *)(v17 + 16);
  v21 = *(struct tagQ **)(v20 + 472);
  if ( (unsigned int)AdjustPwndPtiPqForDelegation((__int64 *)&v21, (__int64 *)&v23, &v20, a3, a10, &v22, &a11) )
    return PostInputMessage(
             v21,
             (LARGE_INTEGER *)v23,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             v18,
             v11,
             (struct tagUIPI_INFO *)v12[1],
             v22,
             (int)a11,
             v20);
  return 0LL;
}
