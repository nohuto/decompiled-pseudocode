/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404542F8
 * Callers:
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140454400 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char *__fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(char *a1)
{
  char *v1; // rbx
  _QWORD *v2; // rax
  char *result; // rax

  v1 = a1;
  memset_0(a1, 0, 0x1DC0uLL);
  v1[6836] = 2;
  ST_STORE<SM_TRAITS>::StInitialize(v1);
  *((_QWORD *)v1 + 860) = v1 + 6872;
  *((_QWORD *)v1 + 859) = 0LL;
  *((_QWORD *)v1 + 862) = v1 + 6888;
  *((_QWORD *)v1 + 861) = 0LL;
  *((_QWORD *)v1 + 864) = v1 + 6904;
  *((_QWORD *)v1 + 863) = 0LL;
  *((_QWORD *)v1 + 858) = 0LL;
  *((_WORD *)v1 + 3480) = 0;
  v1[6962] = 6;
  *((_DWORD *)v1 + 1741) = 0;
  *((_QWORD *)v1 + 872) = v1 + 6968;
  *((_QWORD *)v1 + 871) = v1 + 6968;
  *((_WORD *)v1 + 3468) = 0;
  v1[6938] = 6;
  *((_DWORD *)v1 + 1735) = 0;
  *((_QWORD *)v1 + 869) = v1 + 6944;
  *((_QWORD *)v1 + 868) = v1 + 6944;
  v2 = v1 + 6992;
  *((_WORD *)v1 + 3492) = 1;
  v1[6986] = 6;
  *((_DWORD *)v1 + 1747) = 0;
  v1 += 7456;
  v2[1] = v2;
  *v2 = v2;
  memset_0(v1, 0, 0x78uLL);
  *((_WORD *)v1 + 4) = 1;
  result = v1 + 16;
  v1[10] = 6;
  *((_DWORD *)v1 + 3) = 0;
  *((_QWORD *)v1 + 3) = v1 + 16;
  *((_QWORD *)v1 + 2) = v1 + 16;
  *((_QWORD *)v1 + 4) = 0LL;
  return result;
}
