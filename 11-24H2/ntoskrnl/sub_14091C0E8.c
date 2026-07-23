/*
 * XREFs of sub_14091C0E8 @ 0x14091C0E8
 * Callers:
 *     sub_14091C200 @ 0x14091C200 (sub_14091C200.c)
 *     sub_14091F17C @ 0x14091F17C (sub_14091F17C.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1406967AC (Feature_58333519__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     sub_140A5D984 @ 0x140A5D984 (sub_140A5D984.c)
 */

__int64 __fastcall sub_14091C0E8(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // ecx
  __int64 v8; // r9
  size_t v9; // rdx
  __int64 v10; // r8
  unsigned int *v11; // r15
  _QWORD *v12; // r14
  int v13; // ebx
  volatile signed __int32 *v14; // rsi

  v7 = a1[2];
  v8 = *a1;
  v9 = v8 * v7;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v10 = v7 + a1[6];
  if ( (unsigned int)v10 < v7 || (unsigned __int64)(v8 * v10) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v11 = a1 + 1;
  if ( a1[1] + 1 < v7 )
  {
    v12 = a1 + 4;
    v14 = (volatile signed __int32 *)(a1 + 1);
    v13 = 0;
  }
  else
  {
    v12 = a1 + 4;
    v13 = sub_140A5D984(*((void **)a1 + 2), v9);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v14 = (volatile signed __int32 *)(a1 + 1);
    a1[2] += a1[6];
    v7 = a1[2];
  }
  if ( a4 <= *v11 && v7 )
  {
    memmove((void *)(*v12 + (a4 + 1) * *a1), (const void *)(*v12 + a4 * *a1), *a1 * (*v11 - a4));
    if ( (unsigned int)Feature_58333519__private_IsEnabledDeviceUsageNoInline() )
      _InterlockedIncrement(v14);
    else
      ++*v14;
    *(_QWORD *)(*a1 * a4 + *v12) = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}
