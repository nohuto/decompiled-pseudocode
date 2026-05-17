/*
 * XREFs of RtlAddResourceAttributeAce @ 0x18013B100
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180039260 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C8B90 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800DE900 (RtlFirstFreeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x180114EF0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlUShortAdd @ 0x180139AD8 (RtlUShortAdd.c)
 *     RtlpValidAttribute @ 0x18013BD00 (RtlpValidAttribute.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  unsigned int *Heap; // rax
  size_t v20; // r12
  unsigned __int16 v21; // cx
  int v22; // ecx
  unsigned __int8 *v23; // rdx
  unsigned int j; // r8d
  __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // edx
  char v28; // al
  int v30; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  int Size_4; // [rsp+30h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v35; // [rsp+44h] [rbp-C4h]
  unsigned int Src[64]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v33 = 0LL;
  v34 = 0;
  v35 = 256;
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
  v14 = *(_DWORD *)(a5 + 2) - v34;
  if ( !v14 )
    v14 = *(unsigned __int16 *)(a5 + 6) - v35;
  if ( v14 || *(_BYTE *)(a5 + 1) != 1 || *(_DWORD *)(a5 + 8) )
    return (unsigned int)-1073741811;
  if ( *a1 > 4u || a2 > 4 )
    return (unsigned int)-1073741735;
  v15 = *a1;
  if ( *a1 <= (unsigned __int8)a2 )
    v15 = (unsigned __int8)a2;
  v34 = v15;
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
    Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
    v18 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Heap, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v33) )
    {
      v20 = Size;
      v21 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
      LOWORD(v30) = v21;
      if ( Size > 0xFFFF || (int)RtlUShortAdd(v21, Size, (__int16 *)&v30) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v22 = 8;
        v23 = a1 + 8;
        *a7 = 8;
        for ( j = 0; j < *((unsigned __int16 *)a1 + 2); v23 += *((unsigned __int16 *)v23 + 1) )
        {
          ++j;
          v22 += *((unsigned __int16 *)v23 + 1);
          *a7 = v22;
        }
        v25 = (unsigned __int16)v30;
        v26 = v33;
        v27 = v22 + (unsigned __int16)v30;
        *a7 = v27;
        if ( v26 && v26 + v25 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
        {
          v28 = Size_4;
          *(_WORD *)(v26 + 2) = v25;
          *(_BYTE *)(v26 + 1) = v28;
          *(_BYTE *)v26 = 18;
          *(_DWORD *)(v26 + 4) = 0;
          RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v26 + 8), (unsigned __int8 *)a5);
          memmove((void *)(v26 + 16 + 4LL * *(unsigned __int8 *)(a5 + 1)), v18, v20);
          ++*((_WORD *)a1 + 2);
          *a1 = v34;
        }
        else
        {
          v11 = -1073741671;
          *a7 = (v27 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v18 && v18 != Src )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v18);
  return (unsigned int)v11;
}
