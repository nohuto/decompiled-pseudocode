/*
 * XREFs of ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x140078F28
 * Callers:
 *     _lambda_30b46b3e1498d0fd094f88f23b33fdcf_::operator() @ 0x14021AD34 (_lambda_30b46b3e1498d0fd094f88f23b33fdcf_--operator().c)
 *     _lambda_f93b6c6ee9b6b8901d0816f359f99208_::operator() @ 0x14021AEC4 (_lambda_f93b6c6ee9b6b8901d0816f359f99208_--operator().c)
 * Callees:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x14007822C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMapping(
        HOSTVMMONITORMAPPING *this,
        void *a2,
        struct _LUID a3,
        int a4,
        void *a5)
{
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF
  void *v7; // [rsp+58h] [rbp+18h] BYREF
  struct _LUID v8; // [rsp+60h] [rbp+20h] BYREF
  int v9; // [rsp+68h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = &v7;
  v6[1] = &v8;
  v6[2] = &v9;
  v6[3] = &a5;
  return HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___(this, (__int64)v6);
}
