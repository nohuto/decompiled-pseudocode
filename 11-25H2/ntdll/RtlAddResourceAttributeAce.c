/*
 * XREFs of RtlAddResourceAttributeAce @ 0x18013C870
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x180060CD0 (RtlCopySid.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlFirstFreeAce @ 0x1800DC8E0 (RtlFirstFreeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x180117DF0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlUShortAdd @ 0x18013B248 (RtlUShortAdd.c)
 *     RtlpValidAttribute @ 0x18013D470 (RtlpValidAttribute.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  int v11; // ebx
  bool valid; // al
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rsi
  unsigned int i; // ebx
  unsigned int *v18; // rsi
  __int64 v19; // r9
  unsigned int *Heap; // rax
  size_t v21; // r12
  unsigned __int16 v22; // cx
  int v23; // ecx
  unsigned __int8 *v24; // rdx
  unsigned int j; // r8d
  __int64 v26; // r8
  __int64 v27; // rdi
  int v28; // edx
  char v29; // al
  int v31; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  int Size_4; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  int v35; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v36; // [rsp+44h] [rbp-C4h]
  unsigned int Src[64]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v34 = 0LL;
  v35 = 0;
  v36 = 256;
  memset_thunk_772440563353939046(Src, 0, 0x100uLL);
  Size = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  valid = RtlValidSid((_BYTE *)a5);
  v13 = 0LL;
  if ( !valid )
    return (unsigned int)-1073741704;
  v14 = *(_DWORD *)(a5 + 2) - v35;
  if ( !v14 )
    v14 = *(unsigned __int16 *)(a5 + 6) - v36;
  if ( v14 || *(_BYTE *)(a5 + 1) != 1 || *(_DWORD *)(a5 + 8) )
    return (unsigned int)-1073741811;
  if ( *a1 > 4u || a2 > 4 )
    return (unsigned int)-1073741735;
  v15 = *a1;
  if ( *a1 <= (unsigned __int8)a2 )
    v15 = (unsigned __int8)a2;
  v35 = v15;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 || !a6 || *(_WORD *)a6 != 1 || *(_WORD *)(a6 + 2) || !*(_DWORD *)(a6 + 4) )
    return (unsigned int)-1073741811;
  v16 = *(_QWORD *)(a6 + 8);
  for ( i = 0; i < *(_DWORD *)(a6 + 4); ++i )
  {
    if ( !(unsigned __int8)RtlpValidAttribute(v16, v13) )
      return (unsigned int)-1073741811;
    v16 += 32LL;
  }
  if ( *(_DWORD *)(a6 + 4) != 1 )
    return (unsigned int)-1073741811;
  v18 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &Size);
  if ( v11 == -1073741789 )
  {
    Heap = (unsigned int *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
    v18 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Heap, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v34) )
    {
      v21 = Size;
      v22 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
      LOWORD(v31) = v22;
      if ( Size > 0xFFFF || (int)RtlUShortAdd(v22, Size, (__int16 *)&v31) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v23 = 8;
        v24 = a1 + 8;
        *a7 = 8;
        for ( j = 0; j < *((unsigned __int16 *)a1 + 2); v24 += *((unsigned __int16 *)v24 + 1) )
        {
          ++j;
          v23 += *((unsigned __int16 *)v24 + 1);
          *a7 = v23;
        }
        v26 = (unsigned __int16)v31;
        v19 = 0LL;
        v27 = v34;
        v28 = v23 + (unsigned __int16)v31;
        *a7 = v28;
        if ( v27 && v27 + v26 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
        {
          v29 = Size_4;
          *(_WORD *)(v27 + 2) = v26;
          *(_BYTE *)(v27 + 1) = v29;
          *(_BYTE *)v27 = 18;
          *(_DWORD *)(v27 + 4) = 0;
          RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v27 + 8), (unsigned __int8 *)a5);
          memmove((void *)(v27 + 16 + 4LL * *(unsigned __int8 *)(a5 + 1)), v18, v21);
          ++*((_WORD *)a1 + 2);
          *a1 = v35;
        }
        else
        {
          v11 = -1073741671;
          *a7 = (v28 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v18 && v18 != Src )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v18, v19);
  return (unsigned int)v11;
}
