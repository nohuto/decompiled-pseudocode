/*
 * XREFs of ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@IIIW4Enum@MilBrushMappingMode@@W44MilStretch@@@Z @ 0x180181B80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182DE0 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CachedVisualImageUpdate(
        CChannel *a1,
        unsigned __int32 a2,
        __int128 *a3,
        __int64 *a4,
        unsigned __int32 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  __int64 v13; // xmm1_8
  __int128 v14; // xmm0
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-40h] BYREF
  __m256i v18; // [rsp+24h] [rbp-3Ch]
  __int128 v19; // [rsp+44h] [rbp-1Ch]
  __int64 v20; // [rsp+54h] [rbp-Ch]
  int v21; // [rsp+5Ch] [rbp-4h]
  __int64 v22; // [rsp+90h] [rbp+30h]

  v22 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 56LL))(v22);
  CChannel::CheckHandle(a1, a2, 18LL);
  CChannel::CheckOptionalHandle(a1, a5, 127LL);
  CChannel::CheckOptionalHandle(a1, a6, 159LL);
  CChannel::CheckOptionalHandle(a1, a7, 182LL);
  v13 = *a4;
  v17 = 23;
  *(_OWORD *)&v18.m256i_u64[2] = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_OWORD *)v18.m256i_i8 = 0LL;
  v14 = *a3;
  v18.m256i_i32[0] = a2;
  *(_OWORD *)((char *)v18.m256i_i64 + 4) = v14;
  v18.m256i_i32[7] = a5;
  *(__int64 *)((char *)&v18.m256i_i64[2] + 4) = v13;
  LODWORD(v19) = a6;
  *(_QWORD *)((char *)&v19 + 4) = __PAIR64__(a8, a7);
  v21 = a9;
  v15 = CChannel::SendCommand(a1, &v17, 0x40u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 80LL))(v22);
  return v15;
}
