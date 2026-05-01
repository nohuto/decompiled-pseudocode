/*
 * XREFs of ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180018940
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800183C8 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019300 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18001ECC0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180023D68 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18005D798 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?_FindInsertPos@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18005DCAC (-_FindInsertPos@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWn.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18005DEC0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005E95C (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall utl::hash<_RM_PSM_HOST_INFO>::operator()(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rsi
  WCHAR *v3; // rdi
  __int64 v4; // rbx
  WCHAR v5; // cx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  v2 = (unsigned __int8 *)(a2 + 464);
  v3 = (WCHAR *)a2;
  v4 = 314159LL;
  if ( a2 < a2 + 464 )
  {
    do
    {
      v5 = *v3++;
      v4 = 37 * ((unsigned __int8)RtlUpcaseUnicodeChar(v5) + 37 * v4);
    }
    while ( v3 < (WCHAR *)v2 );
  }
  v6 = 0xBF828C895D0B8BE5uLL * v2[6]
     + 0x1D77462DBBD40701LL * v2[23]
     + 0xB5A728F1B3DF494DuLL * v2[32]
     + 0x8443F2CCD7EFCA65uLL * v2[38]
     + 0x8B7970C2A4EFB2A9uLL * v2[73]
     + 0x4D463845869B9CD9LL * v2[53]
     + 0x6A88D147CBF58115LL * v2[34]
     + 0x4FE1DAF580C363FDLL * v2[60]
     + 0x5D853AC4C14E51E9LL * v2[25]
     + 0x2453E5DE3D4C8439LL * v2[13]
     + 0x65EC3D53F206D09DLL * v2[68]
     + 0x14D2E4F3AFFE229LL * (v2[41] + 37LL * v2[40])
     + 37
     * (v2[86]
      + 37
      * (v2[85]
       + 37
       * (v2[84]
        + 37
        * (v2[83]
         + 37
         * (v2[82]
          + 37
          * (v2[81] + 37 * (v2[80] + 37 * (v2[79] + 37 * (v2[78] + 37 * (v2[77] + 37 * (v2[76] + 37LL * v2[75])))))))))));
  v7 = 0x423D249C25A50325LL * v2[22]
     + 0xFC7A30A306398A8DuLL * v2[48]
     + 0x51C644DB3653E381LL * v2[55]
     + 0x8BA4A57B9C3D7391uLL * v2[59]
     + 0x3C82EBCCD629C471LL * v2[51]
     + 0x8DBD43762DDB26BDuLL * v2[44]
     + 0x78803D01F0C17231LL * v2[35]
     + 0xB2261F79558AB0C1uLL * v2[7]
     + 0x407AFAF12AFB592DLL * v2[56]
     + 0x4128EAEEFF459821LL * v2[31]
     + 0xECFE0C79B5739BCDuLL * v2[64]
     + 0xAA604B65C241EDD5uLL * v2[18]
     + 0xBD1CBAC2ED25B97DuLL * v2[28]
     + 0xEC517606CCCE0235uLL * v2[10]
     + 0xBD90C36322378919uLL * v2[69]
     + 0x2B26220C747DAB5DLL * v2[52]
     + 0x92D64A9170D97459uLL * v2[21]
     + 0x84417E6FF051D6ADuLL * v2[24]
     + 0x44A84175CE2F14D1LL * v2[11]
     + 0x38F8C7054F6DD0DDLL * v2[20]
     + 0x288D4C21D6A4D26DLL * v2[72]
     + 0xBFA02A5D39A9CD6DuLL * v2[8]
     + 0x27C60EFB99C651A9LL * v2[9]
     + 0x2ECBEADD94E1B3F5LL * v2[58]
     + 0xDB9C20F4D76948E5uLL * v2[70]
     + v6;
  v8 = 0x296E17CC49B5EC05LL * v2[46]
     + 0x2F2665556EEF39E1LL * v2[15]
     + 0x16EA6DB39BB240F9LL * v2[61]
     + 0xD08CA55908935D85uLL * v2[14]
     + 0x5526FE2C4673CF11LL * v2[27]
     + 0x21218A9292BF1B9DLL * v2[4]
     + 0x1CF3332BD290D80DLL * v2[16]
     + 0x981EFA65455B8049uLL * v2[49]
     + 0xC53F5E946719795LL * v2[66]
     + 0xADDE4FDA72AB3819uLL * v2[5]
     + 0xF91DC2FB38F228B5uLL * v2[42]
     + 0x3BF4C3C47ADF2FF1LL * v2[19]
     + 0x40B7CD9739B584A1LL * v2[63]
     + 0xDC6C00E405D269C1uLL * v2[71]
     + 0x2C5E09D2BFFAAA95LL * v2[2]
     + 0x4EA2BC662EBCED75LL * v2[26]
     + 0x4F5D696EC151561DLL * v2[36]
     + 0x9FEAE5B513875FC9uLL * v2[17]
     + 0xC378F206849F0269uLL * v2[57]
     + 0xFCE97086A74B1CB9uLL * v2[45]
     + 0x73D058131B2A8879LL * v2[29]
     + 0x4020391EDC0F1C3DLL * v2[12]
     + 0xBEEC149AF4096455uLL * v2[50]
     + 0xBB24DD21FAFC26B1uLL * v2[67]
     + 0xF5BCA5B282606D41uLL * v2[39]
     + v7;
  return v2[87]
       + 0x42E28804A37A36CDLL * *v2
       + 0x1DD2179B35A84099LL * v2[37]
       + 0xC8228AB72E6AE889uLL * v2[65]
       + 0x7C5AC014A0AC9951LL * v2[43]
       + 0xC9D9072F359EFDB1uLL * v2[3]
       + 0x6AE9F48AE50EFCC5LL * v2[30]
       + 0x65C63F607A7BA809LL * v2[33]
       + 0x3433B6F080FF8F35LL * v2[74]
       + 0x5A90B6DB573C2B45LL * v2[62]
       + 0xD1A7F3AEDA1FE1A5uLL * v2[54]
       + 0x7DA9078FE6510661LL * v2[47]
       + 0x69976B75BF3AA789LL * v2[1]
       + v8
       - 0x554257545F56145FLL * v4;
}
